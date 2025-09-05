#include<iostream>
#include<bits/stdc++.h>
using namespace std;
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
	int target_sum ;
	cin>>target_sum;
//using sets 
	unordered_set<int>s;
	for(int i=0;i<n;i++)
		{
			int x = target_sum - a[i];
			if(s.find(x)!=s.end())
			{
				cout<<a[i]<<" "<<x;
				//exit(0);
				cout<<"\n";
			}
			s.insert(a[i]);
		}
//using two pointer approach
	int i = 0; 
	int j = sizeof(a)/sizeof(int)-1;
	while(i<j)
		{
			int curr_sum = a[i]+a[j];
			if(curr_sum==target_sum)
			{
				cout<<a[i]<<" "<<a[j]<<"\n";
					i++;
					j--;
			}
			else if(curr_sum > target_sum)
			{
				j--;
			}
			else if(curr_sum < target_sum)
			{
				i++;
			}
		}

}
