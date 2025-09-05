#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int> &v)
{
    cout<<"[";
    for(auto it:v)
    {
        cout<<it<<",";
    }
    cout<<"]"<<"\n";
}
int index(vector<int>v,int max)
{
  
    std::vector<int>::iterator it;
    it = std::find (v.begin(), v.end(), max);
    int i = it-v.begin();
    return i;  
}
int main() {
	// your code goes here
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
      int max = *max_element(v.begin(),v.end());
    printvec(v);
    //cout<<"\n max : "<<max<<"\n";
    int i = index(v,max);
    vector<int>pre(v.begin(),v.begin()+i);
    printvec(pre);
    vector<int>pos(v.begin()+i+1,v.end());
    printvec(pos);
    
}

