#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


 int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        ll cur_count=0;
        ll count = 0;
       for (int i=0; i<n; i++)
        {
        cout<<"loop no : "<<i<<"\n";
                if(s[i]=='*')
                {
                    count++;
                    cout<<"count : "<<count<<" ";
                    if(count==k)
                    {
                        cout<<"yes"<<"\n";
                        cur_count++;
                        cout<<"cur_count"<<cur_count<<"\n";
                        break;
                    }
                }
                else
                {
                    count=0;
                    cout<<"else block count "<<count<<"\n";
                }
                cout<<"\n";
        }
        if(cur_count==0)
        {
            cout<<"No"<<"\n";
        }

    }
       
     
}
       
    
            