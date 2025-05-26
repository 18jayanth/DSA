#include <vector>
#include <iostream>
#include<stack>
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
Node* reverse(Node* head)
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

bool palindrome(Node* head)
{
if(head==NULL || head->next==NULL) return true;
Node* slow=head;
Node* fast=head;
while(fast->next!=NULL && fast->next->next!=NULL)

{
	fast=fast->next->next;
	slow=slow->next;
}



Node* newnode=reverse(slow->next);
Node* first=head;
Node* second=newnode;
while(second!=NULL)
{
	if(first->data!=second->data)
	{
	
	reverse(newnode);
	return false;
}
first=first->next;
second=second->next;
}
reverse(newnode);
return true;
}


int main() {
    // Write C++ code here
  
    vector<int>arr={11,12,13,12,11};
   Node * head=convertarraytolist(arr);
    if(palindrome(head))
    cout<<"Palindrome";
    else
    cout<<"Not Palindrome";
    
    
    
    

    return 0;
}