#include<iostream>
using namespace std;
int main()
{
 	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("op.txt","w",stdout);
    #endif
	int n;
	cin>>n;
	for(int i=n;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{ 
			cout<<"*"<<" ";                  
		}
		cout<<"\n";
	}
	for(int i=1;i<=n;i++)
	{
		if(i!=1)
		{	
		for(int j=1;j<=i;j++)
		{
			cout<<"*"<<" ";                 
		}
		cout<<"\n";
		}
	}

}	