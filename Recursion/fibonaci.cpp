#include <bits/stdc++.h>
using namespace std;
int fibonaci(int n)
{
	if(n==0 || n==1)
		return n;
	return fibonaci(n-1)+fibonaci(n-2);
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	//cout<<fibonaci(n);
	//count number of binary strings without consective 1's 
	//for n=2   10 00 01 but not 11  so ans = 3;
	//we can observe that the count is actully(n+2)fibonacii number;
	cout<<"number of binary strings without consective 1's : "<<fibonaci(n+2);
	return 0;
}