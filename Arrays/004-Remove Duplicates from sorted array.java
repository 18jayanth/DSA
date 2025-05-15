//two pointer approach , check if arr[i] != arr[j] then change the element next to i with arr[j] and move i to next element(exchanged element)
//so that all the elements left to i are unique
class Solution {
    public int removeDuplicates(int[] nums) {
        int i=0;
    
        for(int j=1;j<nums.length;j++)
        {
            if(nums[j]!=nums[i])
            {
                nums[i+1]=nums[j];
                i++;
            }
        }
        return (i+1);
        
    }
}
