

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        vector<int>ans;
        int n=arr.size();
        int mini=arr[n-1];
        ans.push_back(mini);
      //assume minimum element is last one and its an leader automatically
        for(int i=n-2;i>=0;i--)
        {
          //any element which is greater than mini means its greater than all of them on its right its an leader and update the mini
            if(arr[i]>=mini)
            {
                ans.push_back(arr[i]);
                mini=arr[i];
            }
            
            
        }
      //reverse so that leaders will be in same order as in original array
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
