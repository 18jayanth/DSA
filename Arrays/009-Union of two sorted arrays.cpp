class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        vector<int>unionans;
        // return vector with correct order of elements
        int i=0;
        int j=0;
        while(i<a.size() && j<b.size())
        {   
            
           if(a[i]<=b[j] )
            {
                
         if(unionans.size()==0 || unionans.back()!=a[i])
                unionans.push_back(a[i]);
                i++;
                 
            }
            else
            {   
                 if(unionans.size()==0 || unionans.back()!=b[j])
                unionans.push_back(b[j]);
                j++;
                 
            }
        }
        
        
        while(i<a.size())
        {
                   
         if( unionans.back()!=a[i])
                unionans.push_back(a[i]);
          i++;
                 
        }
      
         while(j<b.size())
        {
                   
          if( unionans.back()!=b[j])
                unionans.push_back(b[j]);
          j++;
        }
        return unionans;
    }
};
