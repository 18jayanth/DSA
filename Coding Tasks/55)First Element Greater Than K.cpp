#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=0;
	int arr[n];
	while(i<n)
	{
		cin>>arr[i];
		i++;
	}
	i=0;
	int res=0;
	int k;
	cin>>k;
	
	while(i<n)
	{
		switch(arr[i]>k && res==0)
		{
			case 1:res=arr[i];
			break;
		}
		i++;
	}
	cout<<res;
}