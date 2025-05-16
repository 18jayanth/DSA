class Solution {
    // Function to rotate an array by d elements in counter-clockwise direction.
    static void rotateArr(int arr[], int d) {
        // add your code here
        int n=arr.length;
        int[] temp=new int[n];
        d=d%n;
        int j=0;
        for(int i=d;i<n;i++)

        {
            temp[j++]=arr[i];
            
        }
        for(int i=0;i<d;i++)

        {
            temp[j++]=arr[i];
            
        }
         j=0;
        for(int i=0;i<n;i++)

        {
            arr[i]=temp[j++];
            
        }
    }
}
