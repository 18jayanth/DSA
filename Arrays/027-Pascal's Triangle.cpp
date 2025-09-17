class Solution {
public:
vector<int>generaterows(int row)
{
    vector<int>ansrow;
    long long ans=1;
  //to generate entire pascal traingle we must insert each row with this function
  //first insert inital 1 in each row
    ansrow.push_back(ans);
  //then insert the next members according to given formula
    for(int col=1;col<row;col++)
    {
        ans=ans*(row-col);
        ans=ans/col;
        ansrow.push_back(ans);
    }
    return ansrow;
}
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>>ans;
         for(int i=1;i<=numRows;i++)
         {
            ans.push_back(generaterows(i));
         }
         return ans;

        
    }
};
