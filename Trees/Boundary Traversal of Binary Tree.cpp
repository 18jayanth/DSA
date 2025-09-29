/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  bool isLeaf(Node* root)
  {
      if(root->left==NULL &&  root->right==NULL) return true;
      return false;
  }
  void left(Node* root,vector<int>&ans)
  {
      Node* node=root->left;
      
      while(node)
      {
          if(!isLeaf(node)) ans.push_back(node->data);
          if(node->left!=NULL) 
          
              node=node->left;
          
          else
          
              node=node->right;
          
      }
  }
  
  void right(Node* root,vector<int>&ans)
  {
      Node* node=root->right;
      vector<int>temp;
      while(node)
      {
          if(!isLeaf(node)) temp.push_back(node->data);
          if(node->right!=NULL) 
          {
              node=node->right;
          }
          else
          {
              node=node->left;
          }
      }
      for(int i=temp.size()-1;i>=0;i--)
      {
          ans.push_back(temp[i]);
      }
  }
  
  void leaf(Node* root,vector<int>&ans)
  {
      if(isLeaf(root)) {ans.push_back(root->data); return;}
      if(root->left!=NULL)leaf(root->left,ans);
      if(root->right!=NULL)leaf(root->right,ans);
  }
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int>ans;
        if(root==NULL) return ans;
        if(!isLeaf(root)) ans.push_back(root->data);
        left(root,ans);
        leaf(root,ans);
        right(root,ans);
        return ans;
    }
};
