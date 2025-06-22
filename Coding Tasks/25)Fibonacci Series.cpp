#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a=0;
	int b=1;
	int i=1;
	int sum=0;
	while(i<=10)
	{  cout<<sum<<" ";
	    sum=a+b;
	    b=a;
	    a=sum;
	
		i++;
		
	}
}