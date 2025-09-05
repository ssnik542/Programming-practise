#include<bits/stdc++.h>
using namespace std;
int strIdx(int *a,int i,int n,int key,int *b,int j)
{
	if(n==i)
		return j;
	if(a[i]==key)
	{
		b[j]=i;
		return strIdx(a,i+1,n,key,b,j+1);
	}
	return strIdx(a,i+1,n,key,b,j);	
}
void allOcc(int *a,int i,int n,int key)  //linear search using recur
{
	if(n==i)    //condition where to stop
		return;   
	if(a[i]==key)    //check if key is present
		cout<<i<<" ";
	allOcc(a,i+1,n,key);  //next element
}
int lastOcc(int *a,int n,int key)
{
	if(n==0)
		return -1;
	//recursive case
	int i = lastOcc(a+1,n-1,key);
	if(i==-1)
	{
		if(a[0]==key)
			return 0;
		else
			return -1;
	}
	//if the subproblem not return -1 then
	return i+1;
}
int firstOcc(int *a,int n,int key){
	if(n==0)
		return -1;
	if(a[0]==key)
		return 0;
	int i = firstOcc(a+1,n-1,key);
	if(i==-1)
		return -1;
	return i+1;
}
int main()
{
	  #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int key;
	cin>>key;
	cout<<"First Occ of "<<key<<": is "<<firstOcc(a,n,key)<<"\n";
	cout<<"Last Occ of "<<key<<": is "<<lastOcc(a,n,key)<<"\n";
	cout<<"all occ ";
	allOcc(a,0,n,key);cout<<"\n";
	int output[100];
	int c = strIdx(a,0,n,key,output,0);
	for(int i=0;i<c;i++)
		cout<<output[i]<<" ";
}