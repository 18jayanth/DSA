#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n,sum=0;
	cin>>n;
	int arr[n];
	int i=0;
	while(i<n)
	{
		cin>>arr[i];
		i++;
	}
	i=0;
	while(i<n)
	{
		sum+=arr[i];
		i++;
	}
	cout<<sum;
}