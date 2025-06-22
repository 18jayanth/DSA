#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n,prod=1;
	cin>>n;
	int arr[n];
	int i=0;
	while(i<n)
	{
		cin>>arr[i];
		i++;
	}
	i=0;
	int sum;
	int maxi=INT_MIN;
	while(i<n-1)
	{
		sum=arr[i]+arr[i+1];
		switch(sum>maxi)
		{
		
		case 1:maxi=sum;
		break;
	}
		i++;
	}
	cout<<maxi;
}