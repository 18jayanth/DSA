class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        //Morre Voting Algorithm
        int n=arr.size();
        int count=0;
        int el;
        //check which element has more presence than others 
        for(int i=0;i<n;i++)
        {
            if(count==0)
            {
                el=arr[i];
                count=1;
            }
            else if(arr[i]==el)
            count++;
            else
            count--;
        }
        int count1=0;
        //cout<<el;
        //check if it is more than n/2 times
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==el)
            count1++;
            
        }
        if(count1>n/2) return el;
        return -1;
        
    }
};
