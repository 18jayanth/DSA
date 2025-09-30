 vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        vector<int>ans;
        int last=-1;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]!=last)
            {
            ans.push_back(arr[i]);
            last=arr[i];
             }
       }
     return ans;
    }
