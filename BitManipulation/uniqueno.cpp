#include <bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    int number;
    int ans=0;
    int cnt[64]={0};
    for(int i=0;i<n;i++)
    {
        cin>>number;
        //ans=ans^number;
        int j=0;
        while(number>0)    ///this is for having one unique number but the repeating number is n times
        { 
            int lst_bit = (number&1);
            cnt[j] +=lst_bit;
            j++;
            number =number>>1;
        }
    }
    int p=1;
    for(int i=0;i<64;i++)
    {
        cnt[i]=cnt[i]%3;
        ans +=(cnt[i]*p);
        p=p<<1;
    }
    cout<<ans;
}