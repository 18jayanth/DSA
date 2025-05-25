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
Node* removehead(Node* head)
{
	if(head==NULL || head->next==NULL)
	return NULL;
	Node* temp=head;
	head=head->next;
	head->prev=nullptr;
	temp->next=nullptr;
	free(temp);
	return head;
}
Node* removetail(Node* head)
{    
	if(head==NULL || head->next==NULL)
	return NULL;
	Node* temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	Node* previous=temp->prev;
	previous->next=NULL;
	temp->prev=NULL;
	free(temp);
	return head;
}

Node* removek(Node* head,int k)

{
	if(head==NULL) return NULL;
	Node* temp=head;

	int cnt=0;
	while(temp!=NULL)
	{
		cnt++;
		if(cnt==k)
		break;
		temp=temp->next;
	}
		Node* previous=temp->prev;
	Node* after=temp->next;

	if(previous==NULL && after==NULL)
	{
	return NULL;
}
	else if(previous==NULL)
	{
	
		return removehead(head);
		
	}
	else if(after==NULL)
	{
	
	return removetail(head);
	
}
	else
	{
		previous->next=after;
		after->prev=previous;
		temp->prev=NULL;
		temp->next=NULL;
		free(temp);
	}
	return head;
}


	
	
int main() {
    // Write C++ code here
  
    vector<int>arr={15,5,8,7,1,6,2};
   Node * head=convertarraytolist(arr);
  head=removek(head,3);
   print(head);
   
    
    
    

    return 0;
}