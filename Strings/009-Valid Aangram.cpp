class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m) return false;
        const int CHAR=256;
        int count[CHAR]={0};

        for(int i=0;i<n;i++)
        {
            count[s[i]]++;
            count[t[i]]--;
        }
          

        for(int i=0;i<256;i++)
        {
            if(count[i]!=0) return false;
        }
        return true;
    }
};
