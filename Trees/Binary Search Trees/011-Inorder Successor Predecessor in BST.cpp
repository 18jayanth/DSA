// TC:0(2*H)
// SC:0(1)
class Solution {
  public:
    vector<Node*> findPreSuc(Node* root, int key) {
        // code here
        Node* pre=NULL;
        Node*  suc=NULL;
        Node* temp=root;
        while(temp)
        {
            if(temp->data>=key)
            {
        
            temp=temp->left;
                
            }
            else
            {
                pre=temp;
                temp=temp->right;
            }
            
        }
        temp=root;
         while(temp)
        {
            if(temp->data<=key)
            {
        
            temp=temp->right;
                
            }
            else
            {
                suc=temp;
                temp=temp->left;
            }
            
        }
        return {pre,suc};
        
        
    }
};
