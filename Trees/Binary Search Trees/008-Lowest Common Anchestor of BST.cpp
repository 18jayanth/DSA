
// Input: root = [6,2,8,0,4,7,9,null,null,3,5], p = 2, q = 8
// Output: 6
// Explanation: The LCA of nodes 2 and 8 is 6.
class Solution {
public:
void lca(TreeNode* root,TreeNode* p,TreeNode* q,TreeNode*  &val)
{
    if(!root) return;
    if(root->val>p->val && root->val>q->val)
    lca(root->left,p,q,val);
    else if(root->val<p->val && root->val<q->val)
    lca(root->right,p,q,val);
    else
    {
        val=root;
        return;
    }
    

}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* val=root;
        lca(root,p,q,val);
         return val;
        
    }
};
