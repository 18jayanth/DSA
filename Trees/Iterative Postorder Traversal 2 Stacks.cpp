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
//TC=0(N)
//SC=0(2N)
//keep root in st1 then push it to st2 if left and right exists push it to st1
//traverse the st2 stack to get th result

vector<int> post_order(Node*root)
{
	
	stack<Node*>st1,st2;
	vector<int>ans;
	st1.push(root);
	while(!st1.empty())
	{
		Node* a=st1.top();
		st1.pop();
		st2.push(a);
		if(a->left!=NULL) st1.push(a->left);
		if(a->right)      st1.push(a->right);
	}
	while(!st2.empty())
	{
		ans.push_back(st2.top()->data);
		st2.pop();
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
	root->right=new Node(a[2]);
	root->left->left=new Node(a[3]);
	root->left->right=new Node(a[4]);
	root->right->left=new Node(a[5]);
	root->right->left->right=new Node(a[6]);
	root->right->left->right->right=new Node(a[7]);
	vector<int>ans=post_order(root);
	print(ans);
	

}
