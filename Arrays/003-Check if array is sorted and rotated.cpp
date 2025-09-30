class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        //traverse the array if any one item greater than its right value then its not in sorted order
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                return 0;
            }
        }
        return 1;

        
    }
};
