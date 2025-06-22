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
	int cnt=0;
	while(i<n)
	{
		switch(arr[i]>0)
		{
			case 1:cnt++;
			break;
			case 0:break;
		}
		i++;
	}
	cout<<cnt;
}