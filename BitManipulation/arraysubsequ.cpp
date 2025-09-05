#include <bits/stdc++.h>
using namespace std;
void subsequence(int n,int a[])
{
	int j=0;
	while(n>0)
	{
		int  lst = n&1;
		if(lst)
		{
			cout<<a[j];
		}
		j++;
		n=n>>1;
	}
	cout<<endl;

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
    {
    	cin>>a[i];
    }
    for(int i=0;i<(1<<n);i++)
    {
    	subsequence(i,a);
    }
}