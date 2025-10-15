class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        int n=s.size();
        int i=0;
        int res=0;
        vector<int>prev(256,-1);
        for(int j=0;j<n;j++)
        {
          //i will give starting index j will give ending index , if we never seen char before then i will be i else previous index+1
            i=max(i,prev[s[j]]+1);
            int maxend=j-i+1;
            res=max(res,maxend);
            prev[s[j]]=j;
            
        }
        return res;
        
    }
};
