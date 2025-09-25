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