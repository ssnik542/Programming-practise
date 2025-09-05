
#include <iostream>
#include<stack>
using namespace std;
void stockSpan(int a[],int n,int span[])
{

    stack<int>s;
    s.push(0);
    span[0]=1;
    for(int i=1;i<=n-1;i++)
    {
        int curr = a[i];
        while(!s.empty() && a[s.top()]<=curr)
        {
            s.pop();
        }
        if(!s.empty())
        {
            int prev_inx = s.top();
            span[i]=i-prev_inx;
        }
        else
        {
            span[i]=i+1;
        }
        s.push(i);
    }
}

int main() {
	// your code goes here
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("op.txt","w",stdout);
    #endif
    int a[]={100,80,60,70,60,75,85};
    int span[10000]={0};
    stockSpan(a,7,span);
    for(int i=0;i<7;i++)
    {
        cout<<span[i]<<" ";
    }
	return 0;
}

