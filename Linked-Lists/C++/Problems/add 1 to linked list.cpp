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
Node* reverse(Node*head)
{
	Node* temp=head;
	Node* prev=NULL;
	while(temp!=NULL)
	{
		Node* front=temp->next;
		temp->next=prev;
		prev=temp;
		temp=front;
	}
	return prev;
}
Node* add1tolinkedlist(Node*head)
{
	head=reverse(head);
	Node* temp=head;
	int carry=1;
	while(temp!=NULL)
	{
		temp->data=temp->data+carry;
		if(temp->data<10)
		{
			carry=0;
			break;
		}
		
			
		
		carry=1;
		temp->data=0;
	
		temp=temp->next;
	}
	if(carry==1)
	{
		Node* newnode=new Node(1);
		head=reverse(head);
		newnode->next=head;
		return newnode;
	}
	head=reverse(head);
	return head;

}


int main() {
    // Write C++ code here
  
    vector<int>arr={1,5,9,9};
   Node * head=convertarraytolist(arr);
    head=add1tolinkedlist(head);
    print(head);
    
    
    

    return 0;
}