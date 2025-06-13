#include<bits/stdc++.h>
using namespace std;
int precedence(char ch)
{
	if(ch=='^') return 3;
	if(ch=='*' || ch=='/') return 2;
	if(ch=='+' || ch=='-') return 1;
	else
	return -1;
}
int main()
{
	cout<<"Infix To Postfix"<<endl;;
	stack<char>st;
	string  s="a+b*(c^d-e)";
	cout<<s<<endl;
	string ans="";
	int n=s.size();
	int i=0;
	while(i<n)
	{
		if( ('A'<=s[i] && s[i]<='Z') || ('a'<=s[i] &&  s[i]<='z') || ('0'<=s[i] && s[i]<='9') )
		ans+=s[i];
		else if(s[i]=='(')
		st.push(s[i]);
		else if(s[i]==')')
		{
			while(!st.empty() && st.top()!='(')
			{
				ans+=st.top();
				st.pop();
			}
			
			st.pop();
		}
		else
		{
			while( !st.empty() && precedence(s[i])<=precedence(st.top()) )
			{
				ans+=st.top();
				st.pop();
			}	
		
		st.push(s[i]);
	}
		
		i++;
		
	}
	while(!st.empty())
	{
		ans+=st.top();
		st.pop();
	}
	cout<<ans;
	
}