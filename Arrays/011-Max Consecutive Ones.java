class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int maxi = 0;
        int count = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == 1)
                count++;
            else {
                if (count > maxi)
                    maxi = count;

                count = 0;
            }
        }
        if (count > maxi)
            maxi = count;
            return maxi;

    }
}
