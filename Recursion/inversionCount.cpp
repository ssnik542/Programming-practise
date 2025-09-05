#include <bits/stdc++.h>
using namespace std;
int merge(int *a,int s,int e)
{
		int mid = (s+e)/2;
		int i= s;
		int j=mid+1;
		int k =s;
		int temp[1000];
		int c=0;
		while(i<=mid && j<=e)
		{
			if(a[i]<a[j])
			{
				temp[k++]=a[i++];
			}
			else
			{
				temp[k++]=a[j++];
				c +=mid-i+1;
			}
		}
		while(i<=mid)
		{
			temp[k++]=a[i++];
		}
		while(j<=e){
			temp[k++]=a[j++];
		}
		for(int i=s;i<=e;i++)
		{
			a[i]=temp[i];
		}
		return c;
}
int inversonCount(int *a,int s,int e)
{
     if(s>=e)
     	return 0;
     //1. divide
     int mid = (s+e)/2;
     //Recursively the array - s,mid and mid+1,e
     int x=inversonCount(a,s,mid);
     int y=inversonCount(a,mid+1,e);
     int z= merge(a,s,e);
    return x+y+z;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("op.txt","w",stdout);
    #endif
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<inversonCount(a,0,n-1);
}