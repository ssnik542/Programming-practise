#include<bits/stdc++.h>
using namespace std;
char spelling[][10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
void print(int n)
{
	if(n==0)
		return;
	print(n/10);
	cout<<spelling[n%10]<<" ";

}
int main()
{
	  #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
	int n;
	cin>>n;
	print(n);
}