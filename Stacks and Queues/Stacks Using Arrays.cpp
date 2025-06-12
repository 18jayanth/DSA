#include<bits/stdc++.h>
using namespace std;
int  push(int x ,int &top, int st[])
{
	if(top==11) cout<<"Stack Overflow"<<"\n";
	else{
	
	top+=1;
	st[top]=x;

}
	return top;

}
int topelement(int &top,int st[])
{
	cout<<st[top]<<"\n";
	return top;
}
int pop(int &top,int st[])
{
	if(top==-1) cout<<"stack underflow";
	else
	top-=1;
	return top;
}
void size(int &top)
{

	cout<< top+1<<endl;;
}
int main()
{
	int top=-1;
	int st[10];
	push(5,top,st);
	topelement(top,st);
	pop(top,st);
	topelement(top,st);
	push(6,top,st);
	push(7,top,st);
	push(8,top,st);
	topelement(top,st);
	pop(top,st);
	topelement(top,st);
	size(top);
	
}