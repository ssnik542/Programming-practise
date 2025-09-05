#include <bits/stdc++.h>
using namespace std;
//recursive func to find number of ways to fill a n * 4 matrix  
int noOfways(int n)
{
	if(n<0) 
		return 0; //because tiling is not possible
	if(n<4)
		return 1;//now u have only one way to tile i.e vertically
	if(n==4)
		return 2;//now u have only two way to tile i.e vertically or horizontally
	
	return noOfways(n-4) + noOfways(n-1); //combining result of placing tiles hor and 4tiles vertically
}
int main()
{
	  #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
	int n;
	cin>>n;
	cout<<noOfways(n);
}
/*  _________________
   |                 |
   |                 |  
   |                 |
   |_________________|

*/