#include <bits/stdc++.h>
using namespace std;
bool canplacethecow(int a[],int n,int c,int min_sep)
{
	int last_cow = a[0];
	//place the first cow int the first stall
	int ct=1;
	for(int i=1;i<n;i++)
	{
		if(a[i]-last_cow>=min_sep)
		{
			last_cow=a[i];
			ct++;
			if(ct==c)
				return true;
		}

	}
	return false;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
	int n,cows=3,ans=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int s=0;
	int e=a[n-1]-a[0];
	while(s<=e)
	{
		int mid = (s+e)/2 ;
		if(canplacethecow(a,n,cows,mid))
		{
			ans=mid;
			s=mid+1;
		}
		else
		{
			e=mid-1;
		}
	}
	cout<<ans;

}