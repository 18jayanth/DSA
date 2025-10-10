//find the node paths of the two nodes keep in vector and check the highest common element between them
class Solution {
public:
bool getpath(TreeNode* root,TreeNode* p ,vector<TreeNode*>&ans)
{
    if(!root) return false ;
    ans.push_back(root);
    if(root->val==p->val)  return true;
    if(getpath(root->left,p,ans) || getpath(root->right,p,ans)) return true;
    ans.pop_back();
    return false;
}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
         TreeNode* lca=nullptr;
         if(!root || !p || !q) return lca;
        vector<TreeNode*>ans;
        getpath(root,p,ans);
        vector<TreeNode*>ans1;
        getpath(root,q,ans1);
        int mini=min(ans.size(),ans1.size());
       
        
        
         for(int i=0;i<mini;i++)
        {
             if(ans[i]==ans1[i])
             lca=ans[i];
             else
             break;
         }
        return lca;
    }
};
