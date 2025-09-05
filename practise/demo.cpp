#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fact(int x)
{
  if(x==1)
  {
    return 1;
  }
  return fact(x-1)*x;
}
int fibonaci(int x)
{
    if(x==0 || x==1)
    {
      return x;
    }
  else
    return fibonaci(x-1) + fibonaci(x-2);
}
int binarysearch(int arr[],int l,int r,int x)
{
  while (l <= r) {
        int m = l + (r - l) / 2;
 
        // Check if x is present at mid
        if (arr[m] == x)
            return m;
 
        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;
 
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
    return -1;

}
int main()
{
   cout<<fact(5)<<"\n";
   for(int i=0;i<10;i++)
   {
   cout<<fibonaci(i)<<" ";
   }
   cout<<"\n";
 int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarysearch(arr, 0, n - 1, x);
    cout<<result;
}
