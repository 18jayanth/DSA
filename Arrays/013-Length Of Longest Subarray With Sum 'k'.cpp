#include<bits/stdc++.h>
using namespace std;
int main()
{
	//this is optimal if array contains positive,negative and zeros
	vector<int>arr={1,1,2,2,3,1,1,1,1,2,3};
	int sum=0;
	int maxlen=0;
	int k=3;
	unordered_map<int,int>mpp;
	for(int i=0;i<arr.size();i++)
	{
		sum+=arr[i];
		if(sum==k)
		maxlen=max(maxlen,i+1);
		int rem=sum-k;
		if(mpp.find(rem)!=mpp.end())
		{
			maxlen=max(maxlen,i-mpp[rem]);
		}
		if(mpp.find(rem)==mpp.end())
		{
			mpp[sum]=i;
		}
	}
	cout<<maxlen;
}
