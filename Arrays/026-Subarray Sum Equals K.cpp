class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        
        int presum=0;
        int cnt=0;
        unordered_map<int,int>mpp;
      //inital map initalized with 0 and count 1
        mpp[0]=1;
        for(int i=0;i<nums.size();i++)
        {
          //add the elements if remainder is present add it to count and add the sum to map
            presum+=nums[i];
            int rem=presum-k;
            cnt+=mpp[rem];
            mpp[presum]+=1;

        }
        return cnt;

        
    }
};
