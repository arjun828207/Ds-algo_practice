#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,x,p,k;
        cin>>n>>x>>p>>k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        if(k<p&&x<arr[p-1])
        {
            cout<<"-1"<<endl;

        }
       else if(k<=p&&x>=arr[p-1])
        {
            int c=0;
            for(int i=n-1;i>=p-1;i--)
            {
                if(arr[i]<x)
                    c++;
            }
            cout<<c<<endl;
            continue;
        }
        if(k>p&&x>arr[p-1])
        {
            cout<<"-1"<<endl;
            continue;
        }
         else if(k>=p&&arr[p-1]>=x)
        {
            int c=0;
            for(int i=0;i<p;i++)
            {
                if(arr[i]>x)
                    c++;
            }
            cout<<c<<endl;
            continue;
        }

    }
}
