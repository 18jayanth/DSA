/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
//if its a symmetric , then its left values should be equal to its right values
//traverse the subtree root->left in root,left,right order
//traverse the subtree root->right in root,right,left order
//if all the nodes are same then its in symmetric in shape
class Solution {
public:

 bool issymmetric(TreeNode* left,TreeNode* right)
    {
        if(left==NULL || right==NULL) return left==right;
        if(left->val!=right->val) return 0;
        return issymmetric(left->left,right->right) && issymmetric(left->right,right->left);

    }
    bool isSymmetric(TreeNode* root) {
        return root==NULL || issymmetric(root->left,root->right);
   
        
    }
};
