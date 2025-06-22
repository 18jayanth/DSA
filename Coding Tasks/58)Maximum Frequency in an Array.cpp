#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int i=0;
	int temp[n];
	int k=0;
	int ans;
	while(i<n)
	{
		cin>>arr[i];
		i++;
	} 
	 i=0;
	int j=i+1;
	int maxi=INT_MIN;
	int cnt=0;
	while(i<n)
	{ cnt=0;
		while(j<n)
		{
			if(arr[i]==arr[j])
			cnt++;
			j++;
		}
		if(cnt>maxi)
		{
			ans=arr[i];
		}
		i++;
	}
	cout<<ans;
}
	