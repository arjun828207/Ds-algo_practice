#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int currpro=arr[0];
    int maxpro=INT_MIN;
    for(int i=1;i<n;i++)
    {
        currpro*=arr[i];
        if(currpro<0)
        currpro=1;
        maxpro=max(maxpro,currpro);
    }
    cout<<maxpro;
}