Input: s = "i.like.this.program.very.much"
Output: "much.very.program.this.like.i"
Explanation: The words in the input string are reversed while maintaining the dots as separators, resulting in "much.very.program.this.like.i".


class Solution {
  public:
    string reverseWords(string &s) {
      //remove leading dots 
    s.erase(0, s.find_first_not_of('.'));

    // Remove trailing dots
    s.erase(s.find_last_not_of('.') + 1);
        int n=s.size();
        string ans;
        vector<string>str;
        string temp="";
        char last;
        
        for(char ch:s)
        {
            if((ch=='.') && (last=='.')) continue;
            else if(ch=='.')
            {
                str.push_back(temp);
                temp="";
            }
            else
            {
                temp+=ch;
            }
            last=ch;
            
        }
        str.push_back(temp);
        reverse(str.begin(),str.end());
        for(int i=0;i<str.size();i++)
        {
            if(i>0) ans+='.';
            ans+=str[i];
        }
        return ans;
    }
};
