#include<bits/stdc++.h>
using namespace std;
int main()
{
	 vector<int> a = {2, 3, 5, 1, 9};
     long long k = 10;
	long long sum=a[0];
	int left=0;
	int right=0;
	int n=a.size();
	while(right<n)
		{
if(left<=right && sum>k)
{
sum-=a[left];
	left++;
}
if(sum==k)
	maxi=max(maxi,right-left+1);
right++;
if(right<n) sum+=a[right[;
	
}
return maxi;
}
//Time complexity:o(2N)
//Space Complexity:o(1)
