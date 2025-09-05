#include <bits/stdc++.h>
using namespace std;
int StringToInt(string a,int n)
{
	if(n==0)
		return 0;
	int lastd = a[n-1]-'0'; //last digit
	int small_ans = StringToInt(a,n-1);
	return small_ans*10 +lastd;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("op.txt","w",stdout);
    #endif
    string a;
    cin>>a;
    int n=a.length();
   int x = StringToInt(a,n);
   cout<<x+1<<"\n";
   //cout<<typeof(x);

}