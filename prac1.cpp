#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         int n;
        cin>>n;
         int diff;
        int sum=0;
         int arr[n];
         int i;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];

        }
        for(i=0;i<n-1;i++)
        {
            diff=abs(arr[i]-arr[i+1])-1;
            sum+=diff;
           // cout<<diff<<endl;
        }
        cout<<sum<<endl;
    }
}
