class Solution {
  public:
//ceil is lowest value which is >=x
    int findCeil(Node* root, int x) {
        // code here
        int ans=-1;
        while(root)
        {
            if(root->data>=x)
            {
            ans= root->data;
            root=root->left;
            }
            else
            root=root->right;
        }
        return ans;
    }
};
