class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
        
        int n=arr.size();
        int temp[n];
        int j=0;
      //very important d always should be less than n
        d=d%n;
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
