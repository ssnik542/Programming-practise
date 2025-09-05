#include <bits/stdc++.h>
using namespace std;
void move(int n,char src,char helper, char dest)
{
	if(n==0)
		return;
	move(n-1,src,dest,helper);
	cout<<"shift the "<<n<<" from "<<src<<" to "<<dest<<"\n";
	move(n-1,helper,src,dest);
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	move(n,'A','B','C');
}