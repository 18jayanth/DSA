// User function Template for C++
class Solution {
  public:
//sliding window slide the string pat from txt[0] to txt[n-m] and check each character if it matches and equal to size of pat then a pattern is there
    bool searchPattern(string& txt, string& pat) {
        // your code here
        int n=txt.size();
        int m=pat.size();
        int i,j;
        for( i=0;i<=n-m;i++)
        {
            for( j=0;j<m;j++)
            {
                if(pat[j]!=txt[i+j])
                break;
            }
            if(j==m)
            return true;
        }
        return false;
        
    }
};
