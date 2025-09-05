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
	char x = 'a';
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<x<<" ";                  		}
			x++;
		cout<<"\n";
	}

}	