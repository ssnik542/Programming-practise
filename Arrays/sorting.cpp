#include <bits/stdc++.h>
using namespace std;
void selectionSort(int *a,int n) //small element sort hota hai start se
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
				swap(a[j],a[i]);
		}
	}
}
void bubbleSort(int *a,int n) //bubble large element sort hota hai phele pichese
{
	for(int i=0;i<n-1;i++)
		for(int j=0;j<n-i-1;j++)
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);
}
void insertionSort(int *a,int n) //cards example check previous element & add into proper position
{
	for(int i=1;i<=n-1;i++)
	{
		int curr = a[i];
		int j=i-1;
		while(a[j]>curr && j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=curr;
	}
}
void merge(int *a,int s,int e)
{
		int mid = (s+e)/2;
		int i= s;
		int j=mid+1;
		int k =s;
		int temp[100];
		while(i<=mid && j<=e)
		{
			if(a[i]<a[j])
			{
				temp[k++]=a[i++];
			}
			else
			{
				temp[k++]=a[j++];
			}
		}
		while(i<=mid)
		{
			temp[k++]=a[i++];
		}
		while(j<=e){
			temp[k++]=a[j++];
		}
		for(int i=s;i<=e;i++)
		{
			a[i]=temp[i];
		}
}
void mergeSort(int *a,int s,int e)
{
     if(s>=e)
     	return;
     //1. divide
     int mid = (s+e)/2;
     //Recursively the array - s,mid and mid+1,e
     mergeSort(a,s,mid);
     mergeSort(a,mid+1,e);
     //merge the two part
     merge(a,s,e);
}
void cyclicSort(int *a,int n)    //O(n) meh sort rember range from 1 to n and index = val - 1 
{
	int i=0;
	while(i<n)
	{
		int correctIndex = a[i]-1;
		if(a[i]!=a[correctIndex])
		{
			swap(a[i],a[correctIndex]);
		}
		else
		{
			i++;
		}

	}
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
	//m = sizeof(a)/sizeof(a[0]);
	//bubbleSort(a,n);
	//selectionSort(a,n);
	//insertionSort(a,n);
	// mergeSort(a,0,n);
	cyclicSort(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
} 