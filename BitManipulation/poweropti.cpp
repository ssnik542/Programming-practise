#include <bits/stdc++.h>
using namespace std;
int power(long long x, unsigned int y, int p)
{
    int res = 1;     // Initialize result
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
int powerOptimiszed(int a,int b)
{
	int ans=1;
	while(b>0)
	{
		int lst = b&1;
		if(lst){
			ans=ans*a;
		}
		//cout<<a<<"\n";
		a=a*a;
		b=b>>1;
	}
	return ans;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int a,n;
    cin>>a>>n;
    cout<<powerOptimiszed(a,n);
}
/*
5^011
1st itr:
lst = 1
ans=5;
a=25;
2nd itr:
lst=1
ans=125;
a=625;
3rs itr:
lst=0
*/ 