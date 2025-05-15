class Solution {
    public int getSecondLargest(int[] arr) {
        // code here
        int maxi=arr[0];
        int sec_maxi=-1;
        for(int i=1;i<arr.length;i++)
        {
            if(arr[i]>maxi)
            {
                sec_maxi=maxi;
                maxi=arr[i];
            }
            else if(arr[i]<maxi && arr[i]>sec_maxi)
            {
                sec_maxi=arr[i];
            }
            
        }
        return sec_maxi;
