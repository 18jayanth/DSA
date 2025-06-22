#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int i=1;
int sum=1;
while(i<=n)
{
	sum*=i;
	i++;
}
cout<<sum;
}
