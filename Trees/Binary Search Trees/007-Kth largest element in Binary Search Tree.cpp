/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return the Kth largest element in the given BST rooted at 'root'
class Solution {
  public:
  void kthlargest(Node* root,int klarge,int &cnt ,int& ans)
  {
      if(!root || cnt>=klarge) return ;
      kthlargest(root->left,klarge,cnt,ans);
      cnt++;
      if(cnt==klarge)
      {
          ans=root->data;
          return;
          
      }
      kthlargest(root->right,klarge,cnt,ans);
  }
  void noofnodes(Node* root,int& cnt)
  {
      if(!root) return;
      noofnodes(root->left,cnt);
      cnt++;
      noofnodes(root->right,cnt);
  }
    int kthLargest(Node *root, int k) {
        // Your code here
        int cnt=0;
        noofnodes(root,cnt);
    //cout<<cnt<<"\n";
        int klarge=cnt-k+1;
       // cout<<klarge<<"\n";
        cnt=0;
        int ans=-1;
        kthlargest(root,klarge,cnt,ans);
        return ans;
        
        
    }
};
