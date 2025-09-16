class Solution {
  public:
    int repeatedCharacter(string& s) {
        // code here
        const int CHAR=256;
        int fint[CHAR];
        int mini=INT_MAX;
      //store all the characters in the array and assign it to -1
        for(int i=0;i<CHAR;i++)
        {
            fint[i]=-1;
        }
      //traverse the string , if the character is -1 means it occured first and assign its index,else find the minimum index and return it
      //the minimum index will be the irst repeating element from right
        for(int i=0;i<s.size();i++)
        {
            int fe=fint[s[i]];
            if(fe==-1)
            fint[s[i]]=i;
            else
             mini=min(fe,mini);
        }
        if(mini==INT_MAX) return -1;
        return mini;
    }
};
