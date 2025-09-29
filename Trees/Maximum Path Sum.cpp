class Solution {
public:
int maxdepth(TreeNode*root,int &maxi)
{
    if(root==NULL) return 0;
     int lh=max(0,maxdepth(root->left,maxi));
    int rh=max(0,maxdepth(root->right,maxi));
    maxi=max(maxi,lh+rh+root->val);
    return root->val+max(lh,rh);
}
    int maxPathSum(TreeNode* root) {
        int sum=INT_MIN;
        maxdepth(root,sum);
        return sum;
        
        
    }
};
