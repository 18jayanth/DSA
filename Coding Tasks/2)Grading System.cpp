#include<bits/stdc++.h>
using namespace std;
int main()
{
	int marks;
	cin>>marks;
	int d=marks/10;
	switch(d)
	{
		   case 9:
			cout<<"A";
			break;
			case 8:
			cout<<"B";
			break;
			case 7:
			cout<<"c";
			break;
			case 6:
			cout<<"D";
			break;
			
			default:cout<<"fail";
	}
}