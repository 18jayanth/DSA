** Take Away 1)Should not use equal symbol while comparing  and largest number must also be -1 along with sec_largest according to requirement **
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int sec_largest=-1;
        int large=-1;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>large)
            {
                sec_largest=large;
                large=arr[i];
            }
            else if(arr[i]<large && arr[i]>sec_largest)
            sec_largest=arr[i];
        }
        return sec_largest;
        
    }
};
