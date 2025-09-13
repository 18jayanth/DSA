class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int left=0;
        int right=n-1;
        while(left<right)
        {
            if(arr[left]+arr[right]==target)
            return true;
            else if(arr[left]+arr[right]<target)
            left++;
            else
            right--;
        }
        return false;
    }
};
