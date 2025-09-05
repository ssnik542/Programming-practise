#include<bits/stdc++.h>
#include <iostream>
using namespace std;
void solve()
{
    unsigned long long c;
    cin>>c;
     //i = ceil(log2(c));
    //cout<<i<<"\n";
    string s;
    string a="",b="";
    s = std::bitset<numeric_limits<unsigned long long>::digits>(c).to_string();
    s.erase(0, min(s.find_first_not_of('0'), s.size()-1));
    if(s[0]=='1')
    {
        a+="1";
        b+="0";
    }
    for(int i=1;i<s.length();i++)
    {
        if(s[i]=='0')
        {
            a=a+"1";
            b=b+"1";

        }
        if(s[i]=='1')
        {
            a=a+"0";
            b=b+"1";
        }
    }
    //cout<<a<<"\n"<<b;
    unsigned long long x = std::stoi(a, nullptr, 2);
    unsigned long long y = std::stoi(b, nullptr, 2);
    cout<<x*y<<"\n";
}
int main()
{
        int t;
        cin>>t;
        while(t--)
        {
            solve();
        }
}