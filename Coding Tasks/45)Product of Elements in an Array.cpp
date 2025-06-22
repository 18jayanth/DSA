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
	while(i<n)
	{
		prod*=arr[i];
		i++;
	}
	cout<<prod;
}
	