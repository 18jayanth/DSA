class Solution {
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    int inOrderSuccessor(Node *root, Node *x) {
        // Your code here
        int sucessor=-1;
        while(root)
        {
            if(x->data >= root->data)
            root=root->right;
            else 
            {
                sucessor=root->data;
                root=root->left;
            }
        }
        return sucessor;
        
    }
};
