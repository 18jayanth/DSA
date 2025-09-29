class Solution {
public:
int maxdepth(TreeNode*root,int &maxi)
{
    if(root==NULL) return 0;
    int lh=maxdepth(root->left,maxi);
    int rh=maxdepth(root->right,maxi);
    maxi=max(maxi,lh+rh);
    return 1+max(lh,rh);
}
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        maxdepth(root,diameter);
        return diameter;
        
    
};
