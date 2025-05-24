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
	int  search(Node * temp,int val)
	{
		int cnt=0;
		while(temp)
		{
			if(temp->data==val)
			return 1;
			temp=temp->next;
		}
		return 0;
	}
int main() {
    // Write C++ code here
  
    vector<int>arr={15,5,8,7,1,2,3,4,5,888,332};

    Node * head=convertarraytolist(arr);
    Node* temp=head;
    int val;
    cout<<"Please enter a number:";
    cin>>val;
    if (search(temp,val))
    
    	cout<<"present in the linked list";

	else
	cout<<"not present";

    return 0;
}