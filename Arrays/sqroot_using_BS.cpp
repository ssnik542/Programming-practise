#include <bits/stdc++.h>
using namespace std;
float sqroot(int n,int p)
{
	int s=0,e=n;
	float ans=-1;
	while(s<=e)
	{
		int mid = (s+e)/2;
		if(mid*mid==n)
			return mid;
		if(mid*mid<n)
		{
			ans=mid;
			s=mid+1;
		}
		else
		{
			e=mid-1;
		}
	}
	float inc = 0.1;
	for(int i=0;i<=p;i++)
	{
		while(ans*ans<=n)
			ans+=inc;
		ans-=inc;
		inc/=10;
	}
	return ans;

}
int main()
{
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
//     #endif
	int n;
	cin>>n;
	cout<<sqroot(n,3);

}