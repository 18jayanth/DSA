

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        vector<int>ans;
        int maxi=INT_MIN;
        int n=arr.size();
        if (n>0)
        {
        ans.push_back(arr[n-1]);
        maxi=max(maxi,arr[n-1]);
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]>=maxi)
            {
            maxi=arr[i];
            ans.push_back(arr[i]);
           
        }
    }
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
