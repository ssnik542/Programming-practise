#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isPrime(int n)
{
	if(n==1)
		return false;
	if(n==2)
		return true;
	for(int i=2;i*i<n;i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
void prime_seive(int *p)   //seive of erathosthenes   O(n log logn)
{
	//first mark all odd number's prime
	for(int i=3;i<=1000000;i+=2)
	{
		p[i]=1;
	}
	//seive
	for(ll i = 3;i<=1000000;i+=2)
	{
		if(p[i]==1)
		{
			//mark all the multiples of i as not prime
			for(ll j=i*i;j<=1000000;j=j+i)
			{
				p[j]=0;
			}
		}
	}
	p[2]=1;
	p[1]=p[0]=0;

}  
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("op.txt","w",stdout);
    #endif
  	 int k;
	    cin>>k;
	    int c=0;
	    int ans=0;
	    for(int i=1;i<=k;i++)
	    {
	    	int n=i;
	    	vector<int>v{0};
	    	int sum=0;
	        while(n>0)
            {
    	        int lst = n&1;
    	        v.push_back(lst);
    	        n=n>>1;
            }
            //cout<<i<<": ";
	        for(int j=v.size()-1;j>=0;j=j-2)
            {
   		        sum+=v[j];
            }
            //cout<<sum<<"\n";
            ans=ans+sum;
       		c++;
            if(ans>=k)
            {
            	break;
            }
            
		}
		cout<<c<<"\n";
	
}