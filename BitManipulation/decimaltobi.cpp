#include <bits/stdc++.h>
using namespace std;
int noOFSetbits(int n)
{
    int ans=0;
    while(n>0)
    {
        n = n&(n-1);
        ans++;
    }
    return ans;    
}
int decimalToBinary(int n)
{
    int ans=0;
    int p=1;
    while(n>0)
    {
        int lsb = n&1;
        ans+=lsb*p;
        p=p*10;
        n=n>>1;
    }
    return ans;    
}
int main()
// {
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
//     #endif
    int n;
    cin>>n;
    cout<<decimalToBinary(n);
    cout<<"\nNo of set bits "<<noOFSetbits(n);
}