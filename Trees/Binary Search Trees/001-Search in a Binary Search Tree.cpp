class Solution {
public:
//traverse till root becomes null or u get the result
    TreeNode* searchBST(TreeNode* root, int val) {
        while(root && root->val!=val)
        {
        if(root->val>val)
        root= root->left;
        else
        root=root->right;
        }
        return root;
        
    }
};
