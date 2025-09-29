class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        bool lefttoright=true;
        if(root==NULL) return ans;
	queue<TreeNode*>que;
	que.push(root);
	while(!que.empty())
	{
		int size=que.size();
		vector<int>level(size);
		for(int i=0;i<size;i++)
		{
			TreeNode* treenode=que.front();
			que.pop();
            int index=lefttoright?i:size-1-i;
            level[index]=treenode->val;
            
			if(treenode->left!=NULL) que.push(treenode->left);
			if(treenode->right!=NULL)que.push(treenode->right);
            
            
			
		}
		ans.push_back(level);
        lefttoright=!lefttoright;
	}
	return ans;
        
    }
};
