#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
	int data;
	Node* left;
	Node* right;
	Node(int data1)
	{
		data=data1;
		left=NULL;
		right=NULL;
	}
};
//TC=0(2n) while loop 
//SC=0(n) for stack
//go extreme left and if no left turn to right and repeat
//if no right and left push to ans and check if the element if right to above ele if yes push that to ans and repeat till all the right 
//elements are finished
vector<int> post_order(Node*root)
{
	vector<int>ans;
	
	Node* curr=root;
	stack<Node*>st;
	
	while(curr!=NULL || !st.empty())
	{
		if(curr!=NULL)
		{
		
		st.push(curr);
		curr=curr->left;
	}
	else{
	
		
	Node* temp=st.top()->right;
		//if right does not exist
	if(temp==NULL)
	{
		temp=st.top();
		st.pop();
		ans.push_back(temp->data);
	 while(!st.empty() && temp==st.top()->right)
	 {
	 	temp=st.top();
	 		st.pop();
	 	ans.push_back(temp->data);
	 
	 }
	}
		//if right exists
	else
	{
		curr=temp;
	}
}
}
	return ans;
}
void print(vector<int>ans)
{
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	} 
}
int main()
{
	vector<int>a={1,2,3,4,5,6,7,8};
	Node* root=new Node(a[0]);
	root->left=new Node(a[1]);
	root->right=new Node(a[6]);
	root->left->left=new Node(a[2]);
	root->right->left=new Node(a[7]);
	root->left->left->right=new Node(a[3]);
	root->left->left->right->right=new Node(a[4]);
	root->left->left->right->right->right=new Node(a[5]);
	vector<int>ans=post_order(root);
	print(ans);
	

}
