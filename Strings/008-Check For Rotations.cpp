class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        return((s+s).find(goal)!=string::npos);
        //TC=0(n) SC=0(n) 
        
    }
};
