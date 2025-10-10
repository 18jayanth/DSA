//if root data<=x go to right so that we might encouter bigger values else go left
class Solution {

  public:
    int floor(Node* root, int x) {
        // Code here
        int  ans=-1;
        while(root)
        {
            if(root->data<=x)
            {
                ans=root->data;
                root=root->right;
            }
            else
            root=root->left;
        }
        return ans;
        
    }
};
