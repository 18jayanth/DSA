#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>arr={1,1,2,2,3,1,1,1,1,2,3};
	int left=0;
	int right=0;
	int maxlen=0;
	int sum=0;
	int k=6;
	int n=arr.size();
	while(right<n)
	{
		sum+=arr[right];
		if(sum==k)
		maxlen=max(maxlen,right-left+1);
		if(sum>k)
		left++;
		right++;
	}
	cout<<maxlen;
	
}
//Time complexity:o(2N)
//Space Complexity:o(1)
