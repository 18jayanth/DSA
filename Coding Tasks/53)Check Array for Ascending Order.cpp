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
	while(i<n-1)
	{
		switch(arr[i]>arr[i+1])
		{
			case 1:res=1;
			break;
		}
		i++;
	}
	if(res==0)
	cout<<"Yes";
	else
	cout<<"No";
	
}