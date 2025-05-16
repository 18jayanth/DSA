class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int irregularities=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>nums[(i+1)%n])
            {
                irregularities+=1;
            }
        }
        return (irregularities>1)?0:1;

        
    }
};
