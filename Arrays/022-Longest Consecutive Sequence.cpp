class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        int longest=1;
        set<int>st;
      //insert into set
        for(int i=0;i<n;i++)
        {
            st.insert(nums[i]);

        }
      //if its 1st element no previous element make count as 1 and try to find out the next element and increase the count track the highest count 
      //and return
        for(int it:st)
        {
            if(st.find(it-1)==st.end())
            {
                int x=it;
                int cnt=1;
                while(st.find(x+1)!=st.end())
                {
                    cnt++;
                    x++;

                }
                longest=max(longest,cnt);
            }
        }
        return longest;
        
    }
};
