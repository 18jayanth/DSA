/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
//traverse the root if null return ,if its a leaf node push it to ans , traverse through root->left and root->right and finally pop
class Solution {

  public:

 void getpath(Node* root, vector<int>& temp, vector<vector<int>>& ans)
    {
        if (!root) return ;

        temp.push_back(root->data);

        if (root->left == NULL && root->right == NULL)
        
            ans.push_back(temp);
    
            getpath(root->left, temp, ans) ;
    
            getpath(root->right, temp, ans);

            temp.pop_back();
    
    }
    vector<vector<int>> Paths(Node* root) {
    
        vector<vector<int>>ans;
      
        vector<int>temp;
      
        if(!root) return ans;
      
        getpath(root,temp,ans);
      
        return ans;
    }
};
