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
	int mini=INT_MAX;
	while(i<n)
	{
		switch(arr[i]<mini)
		{
			case 1:mini=arr[i];
			break;
		}
		i++;
	}
	cout<<mini;
}