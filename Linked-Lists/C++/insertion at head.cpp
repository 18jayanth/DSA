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


Node* insert(Node * head,int val)
{
	if(head==NULL) return new Node(val);
	Node* temp=new Node(val,head);

	return temp;
	
}
int main() {
    // Write C++ code here
  
    vector<int>arr={15,5,8,7,1,6,2};
   Node * head=convertarraytolist(arr);
   head=insert(head,50);
   print(head);
   
    
    
    

    return 0;
}