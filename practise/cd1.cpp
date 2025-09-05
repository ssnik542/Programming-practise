#include <iostream>
#include<bits/stdc++.h>
using namespace std;
using namespace std; 
  
// function to compare two pairs for inbuilt sort 
bool compare(pair<int,int> &p1, 
             pair<int, int> &p2) 
{ 
    // If frequencies are same, compare 
    // values 
    if (p1.second == p2.second) 
        return p1.first < p2.first; 
    return p1.second > p2.second; 
} 
int main() {
	// your code goes here
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		map<int,int>mp;
		for(int i=0;i<n;i++)
		{
			mp[a[i]]++;
		}
		int i=0;
		int s = mp.size();
		pair<int,int>p[s];
		for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
			p[i++] = make_pair(itr->first,itr->second);

		}
		sort(p,p+s,compare);
		for (int i = 0; i < s; i++) 
    	{ 
        int freq = p[i].second; 
        while (freq--) 
            cout << p[i].first << " "; 
    } 

}
