#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int mx=arr[0];
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>mx&&arr[i]>arr[i+1])
        {
            mx=arr[i];
            ans++;
        }
    }
    cout<<ans;
}