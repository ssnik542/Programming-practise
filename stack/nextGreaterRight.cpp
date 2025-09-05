#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int> a){
    int n=a.size();
    vector<int>v;
    stack<int>s;
    for(int i=n-1;i>=0;i--)
    {
        if(s.empty())
        {
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top()>a[i])
        {
            v.push_back(s.top());
        }
        else if(s.size()>0 && s.top()<=a[i]){
            while(s.size()>0 && s.top()<=a[i])
            {
                s.pop();
            }
            if(s.size()==0)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(s.top());
            }
        }
        s.push(a[i]);
    }
    reverse(v.begin(),v.end());
    return v;
    
}
int main()
{
        #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("op.txt","w",stdout);
    #endif
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    vector<int>ans = nextGreaterElement(v);
    for(auto &x :ans)
    {
        cout<<x<<" ";
    }
}