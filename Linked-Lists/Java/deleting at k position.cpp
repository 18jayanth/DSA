#include <vector>
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1)
    {
        data=data1;
        next=next1;
    }
    public:
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }
};
 Node* convertarraytolist(vector<int> &arr)
    {
    	Node* head=new Node(arr[0]);
    	Node* mover=head;
    	for(int i=1;i<arr.size();i++)
    	{
    		Node* temp=new Node(arr[i]);
    		mover->next=temp;
    		mover=temp;
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
Node* remove(Node *head,int k)
{
	
	if(head==NULL) return NULL;
	if(k==1)
	{
			Node* temp=head;
			head=head->next;
			free(temp);
			return head;
			
	}
	int cnt=0;
	Node* temp=head;
	Node* prev=NULL;

	while(temp!=NULL)
	{
		cnt++;
		if(cnt==k)
		{
			prev->next=prev->next->next;
			free(temp);
			break;
		}
		prev=temp;
		temp=temp->next;
	}
	return head;

	
}
int main() {
    // Write C++ code here
  
    vector<int>arr={15,5,8,7,1,6,2};
   Node * head=convertarraytolist(arr);
    head=remove(head,2);
    print(head);
    
    
    

    return 0;
}