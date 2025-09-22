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
vector<vector<int>> levelorder(Node* root)
{
	vector<vector<int>>ans;
	queue<Node*>que;
	que.push(root);
	while(!que.empty())
	{
		int size=que.size();
		vector<int>level;
		for(int i=0;i<size;i++)
		{
			Node* treenode=que.front();
			que.pop();
			if(treenode->left!=NULL) que.push(treenode->left);
			if(treenode->right!=NULL)que.push(treenode->right);
			level.push_back(treenode->data);
		}
		ans.push_back(level);
	}
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
	}
}
int main()
{
Node* root=new Node(5);
root->left=new Node(6);
root->right=new Node(7);
root->left->left=new Node(8);
root->left->right=new Node(9);
root->left->right->left=new Node(1);
print(levelorder(root));


}