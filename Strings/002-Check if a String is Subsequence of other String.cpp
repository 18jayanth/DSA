class Solution {
public:
   bool isSubsequence_rec( string s, string t,int a,int b)

   {
        if(a==0) return 1;
         if(b==0) return 0;

        if(s[a-1]==t[b-1])
        return isSubsequence_rec( s, t,a-1,b-1);
        else 
        return isSubsequence_rec( s, t,a,b-1);



   }
    bool isSubsequence(string s, string t) {


        int a=s.size();
        int b=t.size();
        return isSubsequence_rec( s, t,a,b);
       


        
    }
};
