#include <bits/stdc++.h>
using namespace std;
void replacePI(char *a,int i)
{
	if(a[i]=='\0' || a[i+1]=='\0')   //last element 0 hai ya fir last element p hai 
		return;
	if(a[i]=='p' && a[i+1]=='i')
	{
		int j=i+2;
		//shift j to the end 
		while(a[j]!='\0') 
		{ 
			j++;
		}
		//shift the charcters
		while(j>=i+2)
		{
			a[j+2]=a[j];
			j--;
		}
		//replace pi to 3.14
		a[i]='3'; a[i+1]='.'; a[i+2]='1'; a[i+3]='4';
		replacePI(a,i+4);
	}
	else
	{
		replacePI(a,i+1);
	}
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("op.txt","w",stdout);
    #endif
  char a[]="awepijokar";
  replacePI(a,0);
 cout<<a;
 }