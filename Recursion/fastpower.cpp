#include <bits/stdc++.h>
using namespace std;
int power(int a,int b)
{
    if(b==0)
        return 1;
    else
        return a*power(a,b-1);
}
int fastpower(int x,int y)
{
    if(y==0)
        return 1;
    int smallans = fastpower(x,y/2);
    smallans*=smallans;
    if(y&1)
    {
        return x*smallans;
    }
    return smallans;
}
  
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int x,y;
    cin>>x>>y;
    cout<<fastpower(x,y);
    std::vector<int> v;
    for(int i=0;i<5;i++)
    {
        v.push_back(i*2);
    }
    for(auto it:v)
    {
        cout<<it<<" ";
    }

}   