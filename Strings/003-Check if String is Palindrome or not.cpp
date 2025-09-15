class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
      int begin=0;
      int end=s.size()-1;
      while(begin<=end)
      {
          if(s[begin]!=s[end])
          return 0;
          begin++;
          end--;
      }
      return 1;
        
    }
};
