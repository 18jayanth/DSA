class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        long long n=arr.size();
        // code here
        long long sn=(n*(n+1))/2;
        long long s2n=(n*(n+1)*(2*n+1))/6;
        long long s=0;
        long long s2=0;
      //x->repeating y->missing
      //x-y=>val1 x+y=>val2
        for(int i=0;i<n;i++)
        {
            s+=arr[i];
            s2+=(long long)arr[i]*(long long) arr[i];
        }
        long long val1=s-sn;
        long long val2=s2-s2n;
        val2=val2/val1;
        long long repeat=(val1+val2)/2;
        long long missing=repeat-val1;
        return {(int)repeat,(int)missing};
        
    }
};
