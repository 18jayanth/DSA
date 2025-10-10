//store temp in curr, if current value less than value then it must go to its right if its null insert there else go further right
//else if current value more than value then it must go to its left if its null insert there else go further left
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
     TreeNode* ans=new TreeNode(val);
     if(!root) return ans;
     TreeNode* curr=root;
     while(curr)
     {
        if(curr->val<=val)
        {
            if(curr->right) curr=curr->right;
            else 
            {
                curr->right=ans;
            break;
            }
        }
        else
        {
            if(curr->left) curr=curr->left;
            else 
            {
                curr->left=ans;
                break;
            }

        }
     }
     return root;
        
    }
};
