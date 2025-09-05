#include <bits/stdc++.h>
using namespace std;
bool sorted(int a[],int n)
{
	if(n==0 || n==1)
		return true;
	if(a[0]<a[1] && sorted(a+1,n-1))
	{
		return true;
	}
	else
		return false;
}
int linearSearch(int a[],int i,int n,int key)
{
	if(i==n)
		return -1;
	if(a[i]==key)
		return i;
	return linearSearch(a,i+1,n,key);
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<linearSearch(a,0,n,6)<<"\n";
	if(sorted(a,n))
		cout<<"yes sorted"<<"\n";
	else
		cout<<"not sorted"<<"\n";

}