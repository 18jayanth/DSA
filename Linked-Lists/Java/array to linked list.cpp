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
	int  length(Node * temp)
	{
		int cnt=0;
		while(temp)
		{
			cnt+=1;
			temp=temp->next;
		}
		return cnt;
	}
int main() {
    // Write C++ code here
  
    vector<int>arr={15,5,8,7};
    Node* y=new Node(arr[0]);
    cout<<y->data<<endl;
    Node * head=convertarraytolist(arr);
    cout<<head->data;

    return 0;
}