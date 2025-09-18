
class Solution {
    public static int largest(int[] arr) {
        // code here
        int maxi=arr[0];
        
        for( int i=1;i<arr.length;i++)
        {
            if(arr[i]>maxi)
            {
                maxi=arr[i];
            }
        }
        return maxi;
        
    


