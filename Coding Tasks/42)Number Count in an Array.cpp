#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n,count=0,k;
	cin>>n;
	int arr[n];
	int i=0;
	while(i<n)
	{
		cin>>arr[i];
		i++;
	}
	cin>>k;
	i=0;
	while(i<n)
	{
		switch(arr[i]==k)
		{
			case 1:count++;
			break;
		}
		i++;
	}
	cout<<count;
}
	