void  inorder(TreeNode* root,int k,int& cnt,int& value)
{
    if(!root || cnt>k) return  ;
     inorder(root->left,k,cnt,value);
    cnt++;
    if(cnt==k)
    {
        value=root->val;
        return;
    }

     inorder(root->right,k,cnt,value);
}
    int kthSmallest(TreeNode* root, int k) {
    int cnt=0;
    if(!root) return -1;
    
    int val=-1;
    inorder(root,k,cnt,val);
    return val;


        
        
    }
};
