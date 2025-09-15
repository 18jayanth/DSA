class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        int a=s1.size();
        int b=s2.size();
        const int CHAR=256;
        if(a!=b) return 0;
        int count[CHAR]={0};
        
        for(int i=0;i<a;i++)
        {
        count[s1[i]]++;
        count[s2[i]]--;
        }
        
        for(int i=0;i<CHAR;i++)
        {
            if(count[i]!=0)
            return 0;
        }
        return 1;
        
        
        
    }
};
