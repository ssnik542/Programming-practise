#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string decimalToBinary(int n)
{
    int ans=0;
    int p=1;
    while(n>0)
    {
        int lsb = n&1;
        ans+=lsb*p;
        p=p*10;
        n=n>>1;
    }
    return to_string(ans);    
}
int main()
{
 	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("op.txt","w",stdout);
    #endif
    string s;
    cin>>s;
	int n;
	n= s.length();
	vector<string>st;
	for(int i=0;i<pow(2,n);i++)
	{
		string x =decimalToBinary(i);
		string y="";
		if(x.length()<n)
		{
			for(int ii=0;ii<n-x.length();ii++)
			{
					y.push_back('0');
			}
		}
		y+=x;
		st.push_back(y);
	}
	for(int i=0;i<st.size();i++)
	{
		string x = st[i];
		for(int i=0;i<x.length();i++)
		{
			if(x[i]=='1')
			{
				cout<<s[i];
			}
		}
		cout<<"\n";
	}
}	