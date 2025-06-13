class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
       for (char C : s) 
        {
            if(C=='(' ||C=='['||C=='{')
            st.push(C);
            else{
             if(st.empty()||(st.top()!='(' && C==')')||(st.top()!='[' && C==']')||(st.top()!='{' && C=='}'))
            return false;
            else
            st.pop();
            }
           }
        if(st.empty())
        return true;
        else
        return false;
       }
};
