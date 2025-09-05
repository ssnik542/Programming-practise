#include <bits/stdc++.h>
using namespace std;
/* how to many ways to reach at top?
                   ___ to reach her  he can take 1,2,3.....k jumps
               ___|
		   ___|
       ___|
      |
person
*/
int noOfways(int n)
{
	if(n==0)
		return 1;
	if(n<0)
		return 0;
	return noOfways(n-1)+noOfways(n-2)+noOfways(n-3);
}
//how many ways a friends can go to the party they can go single or couple;
int friendPartion(int n)
{
	if(n==0 || n==1 || n==2)
		return n;

	return friendPartion(n-1)+friendPartion(n-1)*friendPartion(n-2); 
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("op.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    //cout<<noOfways(n)<<"\n";
    cout<<friendPartion(n);
}