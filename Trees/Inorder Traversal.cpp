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
void inorder(Node* root)
{
	if(root==NULL) return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);

}
int main()
{
Node* root=new Node(5);
root->left=new Node(6);
root->right=new Node(7);
root->left->left=new Node(8);
root->left->right=new Node(9);
root->left->right->left=new Node(1);
inorder(root);

}