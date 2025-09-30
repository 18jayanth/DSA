  void pushZerosToEnd(vector<int>& arr) {
        // code here
      //count the zeros and push the non zeros to before
    //TC:0(n)
        int zeros=0;
        int k=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            
            zeros++;
            else
            arr[k++]=arr[i];
            }
      //add zeros at the end
        for(int i=n-zeros;i<n;i++)
        {
            arr[i]=0;
        }
        
        
        
    }
