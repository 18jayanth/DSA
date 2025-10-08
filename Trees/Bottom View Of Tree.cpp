/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/
//same as Top View Except remove the if condition for map , even its the first line or already prsent we need to update the map every time
class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // code here
         vector<int>ans;
        queue<pair<Node*,int>>que;
        map<int,int>mpp;
        que.push({root,0});
        while(!que.empty())
        {
            auto it=que.front();
            que.pop();
            Node* node=it.first;
            int line=it.second;
            
        
            mpp[line]=node->data;
            
            if(node->left!=NULL)
            que.push({node->left,line-1});
            if(node->right!=NULL)
            que.push({node->right,line+1});
        }
        for(auto it:mpp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};
