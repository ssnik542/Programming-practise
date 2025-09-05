#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int main()
{
        int n,k,ans=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>k;
        for(int i=0;i<n;i++)
        {
            if(a[i]<k)
            {
                ans=max(ans,a[i]);
            }
        }
        cout<<ans;
 }