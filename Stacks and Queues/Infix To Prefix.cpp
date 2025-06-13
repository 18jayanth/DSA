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
	cout<<"Infix To Prefix"<<endl;;
	stack<char>st;
	string  s="(A+B)*C-D+F";
	cout<<s<<endl;
	string ans="";
	string rev="";
	int n=s.size();
	int i=0;
	// step-1 reverse the string 
	for(int i=0;i<n;i++ )
	{   
	rev+=s[n-1-i];
	}
	cout<<"reversed"<<" "<<rev<<endl;
	//step-2 reverse the brackets
	for(int i=0;i<n;i++)
	{
		if(rev[i]=='(')
		rev[i]=')';
		else if(rev[i]==')')
		rev[i]='(';
	}
	cout<<"reversed"<<" "<<rev<<endl;
	s=rev;
	
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
		if (s[i] == '^') {
          while (precedence(s[i]) <= precedence(st.top())) {
            ans += st.top();
            st.pop();
          }

        } else {
			while( !st.empty() && precedence(s[i])<precedence(st.top()) )
			{
				ans+=st.top();
				st.pop();
			}	
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
	cout<<ans<<endl;;
	
	rev="";
	for(int i=0;i<n;i++ )
	{   
	rev+=ans[n-1-i];
	}
	cout<<rev;
	
}