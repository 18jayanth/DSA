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
Node* reverse(Node* head)
{
	Node*current=head;
	Node*previous=NULL;
	while(current!=NULL)
	{
		previous=current->prev;
		current->prev=current->next;
		current->next=previous;
		current=current->prev;
	}
	return previous->prev;
}

int main() {
    // Write C++ code here
  
    vector<int>arr={15,5,8,7,1,6,2};
   Node * head=convertarraytolist(arr);
    head=reverse(head);
    print(head);
    
    
    

    return 0;
}