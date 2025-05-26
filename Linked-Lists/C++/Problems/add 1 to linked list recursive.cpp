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
int helper(Node* temp)
{
	if(temp==NULL)
	return 1;
	int carry=helper(temp->next);
	temp->data+=carry;
	if(temp->data<10)
	{
		return 0;
	}
	temp->data=0;
	return 1;
}
Node* add1tolinkedlist(Node*head)
{
Node* temp=head;
//final carry
int carry=helper(temp);
if(carry==1)
{
	Node* newnode=new Node(1);
	newnode->next=head;
	return newnode;
}
return head;

}


int main() {
    // Write C++ code here
  
    vector<int>arr={1,9,9,9};
   Node * head=convertarraytolist(arr);
    head=add1tolinkedlist(head);
    print(head);
    
    
    

    return 0;
}