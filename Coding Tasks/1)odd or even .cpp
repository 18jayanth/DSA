#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int r=n%2;
	switch(r)
	{
		case 0:cout<<"even";
		break;
		case 1:cout<<"odd";
		break;
		default:cout<<"None";
	}
}
	