#include<bits/stdc++.h>
using namespace std;
int  push(int x ,int maxsize,int &top, int st[])
{
	if(top==maxsize) cout<<"Stack Overflow"<<"\n";
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
	int maxsize;
	int st[maxsize];
	push(5,maxsize,top,st);
	topelement(top,st);
	pop(top,st);
	topelement(top,st);
	push(6,maxsize,top,st);
	push(7,maxsize,top,st);
	push(8,maxsize,top,st);
	topelement(top,st);
	pop(top,st);
	topelement(top,st);
	size(top);
	
}
