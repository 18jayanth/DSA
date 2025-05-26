#include <vector>
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    public:
    Node(int data1,Node* next1,Node* prev1)
    {
        data=data1;
        next=next1;
        prev=prev1;
    }
    public:
    Node(int data1)
    {
        data=data1;
        next=nullptr;
        prev=nullptr;
    }
};
 Node* convertarraytolist(vector<int> &arr)
    {
    	Node* head=new Node(arr[0]);
    	Node* prev=head;
    	for(int i=1;i<arr.size();i++)
    	{
    		Node* temp=new Node(arr[i],NULL,prev);
    		prev->next=temp;
    		prev=temp;
		}
		return head;
	}
	
void print(Node * head)
{
Node* temp=head;
while(temp!=NULL)
{
cout<<temp->data<<" "	;
temp=temp->next;
}
}
Node* sort(Node*head)
{
	Node* zerohead=new Node(-1);
	Node* onehead=new Node(-1);
	Node* twohead=new Node(-1);
	Node*zero=zerohead;
	Node*one=onehead;
	Node*two=twohead;
	Node*temp=head;
	while(temp!=NULL)
	{
		if(temp->data==0)
		{
			zero->next=temp;
			zero=zero->next;
		}
		else if(temp->data==1)
		{
			one->next=temp;
			one=one->next;
		}
		else
		{
			two->next=temp;
			two=two->next;
		}
		
		temp=temp->next;
	}
	if(onehead->next!=NULL)
	zero->next=onehead->next;
	if(twohead->next!=NULL)
	one->next=twohead->next;
	head=zerohead->next;
	return head;
}


int main() {
    // Write C++ code here
  
    vector<int>arr={0,2,0,2,0,0,2};
   Node * head=convertarraytolist(arr);
    head=sort(head);
    print(head);
    
    
    

    return 0;
}