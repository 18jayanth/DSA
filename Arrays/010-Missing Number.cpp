class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int total1=n*(n+1)/2;
        int total=0;
        for(int i=0;i<n;i++)
        {
            total+=nums[i];
        }
        return total1-total;
    }
};
