#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
 {
     cin>>arr[i];
 }
 int mx=arr[0];
 int mn=INT_MAX;
 for(int i=0;i<n;i++)
 {
     if(arr[i]>mx)
        mx=arr[i];
     if(arr[i]<mn)
        mn=arr[i];
 }
 cout<<"Maximum value in the array:"<<mx<<endl;
 cout<<"Minimum value in the array:"<<mn<<endl;
}
