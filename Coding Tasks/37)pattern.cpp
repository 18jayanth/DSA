#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=5;i++)
	{
		for(int j=n-i;j>0;j--)
		{
			cout<<" ";
		}
		for(int j=1;j<2*i;j++)
		{
			cout<<"*";
		}
		for(int j=n-i;j>0;j--)
		{
			cout<<" ";
		}
		
		cout<<"\n";
	}
}
