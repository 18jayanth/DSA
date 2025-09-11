class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
        
        int n=arr.size();
      // or vector<int>temp(n); will give same result
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
      // Another Optimal way to reverse the 1st part REverse the second part and reverse string as  a Whole
//This approach is better as it wont required extra array

class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void reverse(vector<int>&arr,int start,int end)
        {
            while(start<end)
            {
                swap(arr[start],arr[end]);
                start++;
                end--;
            }
        }
    void rotateArr(vector<int>& arr, int d) {
        
        // code here
        int n=arr.size();
         d=d%n;
        if(d<=0)return ;
       
        reverse(arr,0,d-1);
        reverse(arr,d,n-1);
        reverse(arr,0,n-1);
    }
};
        
    
