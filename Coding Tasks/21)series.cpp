#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=1;
	int k=3;
	int sum=0;
	while(i<=n)
	{
		sum+=k;
		cout<<sum<<" ";
		i++;
		k=k+2;
	}
}