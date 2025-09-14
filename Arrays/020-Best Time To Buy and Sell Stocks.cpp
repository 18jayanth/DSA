class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int maxprofit=0;
        int n=prices.size();
      //approach will be 
      //traverse the array and find the max profit by diffeence currrent one with minimum one parelly update minimum accordingly
        for(int i=1;i<n;i++)
        {
            int diff=prices[i]-mini;
            maxprofit=max(maxprofit,diff);
            mini=min(prices[i],mini);
        }
        return maxprofit;
    }
};
