class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int ans=0;
        int leftmax=-1;
        int rightmax=-1;
      //traverse from left to right using two pointers
        while(left<=right)
        {
          //base condition total=total +min(leftmax,rightmax)-height[i]
          //if height[left] is smaller than right then left  may hold some water
          //if it is less than left max only then it can hold water or update the left max

            //focussing on small heights !!!
            if(height[left]<=height[right])
            {
                if(leftmax<=height[left])
                leftmax=height[left];
                else
                ans+=leftmax-height[left];
                left++;

            }
           //if height[right] is smaller than left then right  may hold some water
          //if it is less than right  max only then it can hold water or update the right max
            else
            {
                if(rightmax<=height[right])
                rightmax=height[right];
                else
                ans+=rightmax-height[right];
                right--;

            
            }

        }
        return ans;
        
    }
};
