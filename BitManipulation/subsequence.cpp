#include <bits/stdc++.h>
using namespace std;
void filterChars(int n,char a[])
{
	int j=0;
	while(n>0)
	{
		int lst = n&1;
		if(lst)         
		{
			cout<<a[j];
		}
		j++;
		n=n>>1;
	}
	cout<<endl;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    char s[100];
    cin>>s;
    int n = strlen(s);
    for(int i=0;i<(1<<n);i++)
    {
    	filterChars(i,s);
    }
}