class Solution {
public:
//TC 0(N) SC 0(N)
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL || q==NULL) return(p==q);

        return(p->val==q->val) && isSameTree(p->left,q->left) &&isSameTree(p->right,q->right);

    }
};
