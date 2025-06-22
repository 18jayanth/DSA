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
	while(i<n)
	{
		cin>>arr[i];
		i++;
	}
	i=n-1;
	while(i>=0)
	{
		temp[k]=arr[i];
		i--;
		k++;
	}
	k=0;
	
	i=0;
	int res=0;
	while(i<n)
	{
		switch(arr[i]!=temp[i])
		case 1:res=1;
		break;
	}
	if(res==0)
	cout<<"Yes";
	else
	cout<<"No";
	
}