//Given an array nums, return true if the array was originally sorted in non-decreasing order, 
 // then rotated some number of positions (including zero). Otherwise, return false.

//There may be duplicates in the original array.
//if there are more than one irregualrties then it will be false else true

  class Solution {
    public boolean check(int[] nums) {
        int irregularities=0;
        for(int i=0;i<nums.length;i++)
        {
            if(nums[i]> nums[(i+1)%nums.length])
            {
                irregularities+=1;
            }
        }
        if(irregularities>1)
        return false;
        else return true;



  
