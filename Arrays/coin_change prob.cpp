#include <bits/stdc++.h>
using namespace std;
bool compare(int a,int b)
{
    return a<=b;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int rupess[]={1,2,5,10,20,50,100,200,500,2000};
    int money;
    cin>>money;
    int size = sizeof(rupess)/sizeof(int);
    while(money>0)
    {
        int it = lower_bound(rupess,rupess+size,money,compare)-rupess-1;
        int m=rupess[it];
        cout<<m<<" ";
        money-=m;
    }
}












