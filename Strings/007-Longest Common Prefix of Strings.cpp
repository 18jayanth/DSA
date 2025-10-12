//sort the array check the first and last , store the common if no common break
//Input: arr[] = ["geeksforgeeks", "geeks", "geek", "geezer"]
//Output: "gee"
//Explanation: "gee" is the longest common prefix in all the given strings.
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        // your code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        string a=arr[0];
        string b=arr[n-1];
        string ans="";
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==b[i])
            ans+=a[i];
            else break;
        }
        return ans;
        
    }
};
