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
// push the root and with its line to queue
//if line is never in the map push it to map else ignore
//push if the node has any left or right nodes
//repeat till all the nodes in queue complated
//traverse the map map being in the sorted order we will get accurate result
class Solution {
  public:
    vector<int> topView(Node *root) {
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
            
            if(mpp.find(line)==mpp.end())
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
