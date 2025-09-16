
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        //  code here
        const int CHAR=256;
        int count[CHAR]={0};
      //traverse the array and increase the count if an element present in string
        for(int i=0;i<s.size();i++)
        {
            count[s[i]]++;
        }
      //if the count is 1 then it will be appearing for first time return it ,if nothing found return $
        for(int i=0;i<s.size();i++)
        {
            if(count[s[i]]==1)
            return s[i];
        }
        return '$';
        
        
    }
};
