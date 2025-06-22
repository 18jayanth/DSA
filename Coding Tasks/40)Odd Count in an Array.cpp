#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n,count=0;
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
		int r=arr[i]%2;
		switch(r)
		{
			case 1:count++;
			break;
			
		}
		i++;
	}
	cout<<count;
}