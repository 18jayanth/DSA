class Solution {
  public:
    
    int factorial(int n)
    {
        int sum=1;
        for(int i=1;i<=n;i++)
        {
            sum*=i;
        }
        return sum;
    }
    bool duplicates(string s)
    {
        const int SIZE=26;
        int count[SIZE]={0};
        for(int i=0;i<s.size();i++)
        {
           count[s[i]]++;
        }
        for(int i=0;i<SIZE;i++)
        {
            if(count[i]>1) return 1;
        }
        return 0;
        
        
    }
    int findRank(string& s) {
        // code here
        if(duplicates(s)) return 0;
        int n=s.size();
        int res=1;
        const int CHAR=256;
        int mul=factorial(n);
        int count[CHAR]={0};
        
        for(int i=0;i<n;i++)
        {
            count[s[i]]++;
        }
        
        for(int i=1;i<CHAR;i++)
        {
            count[i]+=count[i-1];
        }
        
        for(int i=0;i<n-1;i++)
        {
            mul=mul/(n-i);
            res+=count[s[i]-1]*mul;
            for(int j=s[i];j<CHAR;j++)
            {
                count[j]--;
            }
        }
        
        return res;
    }
};
