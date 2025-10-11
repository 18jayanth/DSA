class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return NULL;
        if(root->val==key) return helper(root);
        TreeNode* curr=root;
        while(root)
        {
            if(root->val>key){
            if(root->left && root->left->val==key)
            {
                root->left=helper(root->left);
                break;
            }
            else
            {
                root=root->left;
            }
            }
            else{
             if(root->right && root->right->val==key)
            {
                root->right=helper(root->right);
                break;
            }
            else
            {
                root=root->right;
            }
            }
        }
        return curr;
        
    }
    TreeNode* helper(TreeNode* root)
    {
        if(!root->left) return root->right;
        else if(!root->right) return root->left;
        TreeNode* Rightchild=root->right;
        TreeNode* lastRight=lastRightChild(root->left);
        lastRight->right=Rightchild;
        return root->left;
    }
    TreeNode* lastRightChild(TreeNode* root)
    {
        while(root->right)
        {
            root=root->right;
        }
        return root;
    }
};
