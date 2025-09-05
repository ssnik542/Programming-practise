#include <bits/stdc++.h>
using namespace std;
int mul(int a,int b)
{
	if(b==1)
		return a;
	return a+mul(a,b-1);
}
int main()
{
	  #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
	int a,b;
	cin>>a>>b;
	cout<<mul(a,b);
}