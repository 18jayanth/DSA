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
vector<int> iterative_order(Node*root)
{
	stack<Node*>st;
	vector<int>ans;
	Node* node=root;
	
	while(true)
	{
		if(node!=NULL)
		{
			st.push(node);
			node=node->left;
			}
		else
		{
			if(st.empty()==true) break;
			node=st.top();
			st.pop();
			ans.push_back(node->data);
			node=node->right;
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
	vector<int>a={1,2,3,4,5,6,7};
	Node* root=new Node(a[0]);
	root->left=new Node(a[1]);
	root->right=new Node(a[2]);
	root->left->left=new Node(a[3]);
	root->left->right=new Node(a[4]);
	root->left->right->left=new Node(a[5]);
	root->left->right->right=new Node(a[6]);
	vector<int>ans=iterative_order(root);
	print(ans);
	
}