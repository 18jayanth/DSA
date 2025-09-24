#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
	int data;
	struct Node*left;
	struct Node*right;
	Node(int val)
	{
		data=val;
		left=NULL;
		right=NULL;
	}
};
vector<int> preorder(Node* root)
{
	vector<int>preorder;
	if(root==NULL) return preorder;
	stack<Node*>st;
	st.push(root);
	while(!st.empty())
	{
		root=st.top();
		st.pop();
		preorder.push_back(root-> data);
		if(root->right!=NULL) st.push(root->right);
		if(root->left!=NULL) st.push(root->left);
	}
	return preorder;

}
void print(vector<int>root)
{
	for(int i=0;i<roo)
}
int main()
{
Node* root=new Node(5);
root->left=new Node(6);
root->right=new Node(7);
root->left->left=new Node(8);
root->left->right=new Node(9);
root->left->right->left=new Node(1);
preorder(root);

}