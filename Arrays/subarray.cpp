#include<bits/stdc++.h>
using namespace std;
//largest sum contigious subarray problem
void maxSubArraySum(int *a,int n)   //  time Complexity : O(n) dp solution
{
	int max_so_far = a[0];
   int curr_max = a[0];
 
   for (int i = 1; i < n; i++)
   {
        curr_max = max(a[i], curr_max+a[i]);
        max_so_far = max(max_so_far, curr_max);
   }
   cout<< max_so_far;	
}
void kadaneAlgo(int *a,int n)
{
 	int maxSum=0,currSum=0;
    for (int i = 0; i < n; i++)
   {
   			currSum+=a[i];
   			if(currSum<0)
   				currSum=0;
   	maxSum=max(maxSum,currSum);
   }
   cout<<maxSum;
}
void subArraysum2(int a[],int n)  //  time Complexity : O(n^2)
{
	int maxSum=0;
	int currSum=0;
	for(int i=0;i<n;i++)
	{
		currSum=0;
		for(int j=i;j<n;j++)
		{
			currSum+=a[j];
			maxSum=max(maxSum,currSum);
		}
		
	}
	cout<<maxSum;

}
void subArraysum1(int *a,int n)   //  time Complexity : O(n^3) 
{
	int maxSum=0;
	int currSum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			currSum=0;
			for(int k=i;k<=j;k++)
			{
				currSum+=a[k];
			}
			maxSum = max(maxSum,currSum);
		}		
	}
		cout<<maxSum;
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
	//subArraysum2(a,n);
	//maxSubArraySum(a,n);
	kadaneAlgo(a,n);
}