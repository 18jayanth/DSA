class Solution {
public:
int maxdepth(TreeNode* root)
{
    if(root==NULL) return 0;
    int lh=maxdepth(root->left);
    int rh=maxdepth(root->right);
    if(lh==-1 || rh==-1) return -1;
    if(abs(lh-rh)>1) return -1;
    return 1+max(lh,rh);
}
    bool isBalanced(TreeNode* root) {
        return maxdepth(root)!=-1;
        
    }
};
