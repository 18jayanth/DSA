class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int max=INT_MIN;
        int sum=0;
        //Kadane Algorithm
        //Traverse the array ans sum the array
        //if its more than max update max
        //if sum<0 update sum to 0
        for(int i=0;i<n;i++)
        {
        sum+=nums[i];
         if(sum>max) max=sum;
         if(sum<0) sum=0;
         
        }
        return max;
        
    }
};
