#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n,prod=1;
	cin>>n;
	int arr[n];
	int i=1;
	while(i<=n)
	{
		cin>>arr[i];
		i++;
	}
	i=1;
	int mini=INT_MAX,mini_index=0;
	while(i<=n)
	{
		switch(arr[i]<mini)
		{
			case 1:mini_index=i;
			mini=arr[i];
			break;
		}
		i++;
	}
	cout<<mini_index;
}