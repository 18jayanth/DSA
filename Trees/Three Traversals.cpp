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
vector<vector<int>> iterative_order(Node*root)
{
	stack<pair<Node*,int>>st;
	vector<int>pre,in,post;
	vector<vector<int>>ans;
	st.push({root,1});
	while(!st.empty())
	{
		auto it=st.top();
		st.pop();
		
		if(it.second==1)
		{
		pre.push_back(it.first->data);
		it.second++;
		st.push(it);
		if(it.first->left!=NULL)
		{
		
		st.push({it.first->left,1});
	}
	}
	else if(it.second==2)
	{
		in.push_back(it.first->data);
		it.second++;
		st.push(it);
		if(it.first->right!=NULL)
		{
		
		st.push({it.first->right,1});
	}
}
		else
	{
		post.push_back(it.first->data);
	
	}
		
	}

		ans.push_back(pre);
		ans.push_back(in);
		ans.push_back(post);
	
	return ans;
}
void print(vector<vector<int>>ans)
{
	for(int i=0;i<ans.size();i++)
	{
		for(int j=0;j<ans[i].size();j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<"\n";
	} 
}
int main()
{
	vector<int>a={1,2,3,4,5,6,7};
	Node* root=new Node(a[0]);
	root->left=new Node(a[1]);
	root->right=new Node(a[4]);
	root->left->left=new Node(a[2]);
	root->left->right=new Node(a[3]);
	root->right->left=new Node(a[5]);
	root->right->right=new Node(a[6]);
	vector<vector<int>>ans=iterative_order(root);
	print(ans);
	
}