#include <bits/stdc++.h>
using namespace std;
void odd_even(int n)
{
    if(n&1)
        cout<<"odd";
    else
    {
        cout<<"even";
    }
}
bool getBit(int n,int i)
{
    return n&(1<<i) > 0 ? 1 : 0;
    /*
        000101
       &000100  -> 1<<2 = 00100
       -------
       0000100 
    */
}
void setBit(int &n,int i)
{
    int mask = 1<<i;
    n = n | mask;
}
void clearBit(int &n,int i)
{
    int msk = 1<<i;
     msk = ~(msk);
    n = n&msk;
}
void updateBit(int &n,int i,int v)
{
     int msk = 1<<i;
     msk = ~(msk);
    n = n&msk;
    n = n| (v<<i);
}
int clearLastiBit(int n,int i)
{
    int mask = (-1<<i);
    return n&mask;
}
int clearRangefBits(int n,int i,int r)
{
    int ones =(~0);
    int a = ones<<(r+1);
    int b =(1<<i)-1;
    int mask= a|b;
    int ans = n&mask;
    return ans;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    //odd_even(n);
    // cout<<getBit(n,2);
    // setBit(n,1);
    //clearBit(n,2);
    // updateBit(n,2,0);
    // updateBit(n,3,1);
   cout<<clearLastiBit(12,3);
    //cout<<clearRangefBits(31,1,3);
    //cout<<n;
}