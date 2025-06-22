#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
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
		switch (r)
		{
			case 1:cout<<"odd";
			cout<<"\n";
			break;
			case 0:cout<<"even";
			cout<<"\n";
			break;
			
		}
		i++;
	}
}