/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/
//use recursive preorder but in reverse root right then left and 
//if the level of the current node is equal to size its the first element in that level push it to ans and return it
class Solution {
  public:
  void LeftView(Node* root,int level,vector<int>&ans)
  {
      if (root==NULL)
      return ;
      if (level==ans.size())
      {

      ans.push_back(root->data);
      }
      
       LeftView(root->right,level+1,ans);
      
       LeftView(root->left,level+1,ans);
  }
    vector<int> leftView(Node *root) {
        // code here
        
        vector<int>ans;
        LeftView(root,0,ans);
        
        return ans;
    }
};
