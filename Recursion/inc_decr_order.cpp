#include<bits/stdc++.h>
using namespace std;
void incOrder(int n)
{
	if(n==0)
	{
		return;
	}
	incOrder(n-1);
	cout<<n<<" ";
	
}
void decOrder(int n)
{
	if(n==0)
	{
		return;
	}
	cout<<n<<" ";
	decOrder(n-1);
	
}
int main()
{
	int n=5;
	incOrder(n);
	cout<<"\n";
	decOrder(n);
}