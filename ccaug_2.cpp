#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,k,pos=-1;
        int x=INT_MAX;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<n;i++)
        {
            int sum=arr[i],cnt=1;

            while(sum<k)
            {
                sum=sum+arr[i];
                cnt++;
            }
            if(sum==k)
            {
                if(cnt<x)
                {
                    x=cnt;
                    pos=i;
                }
        }

    }
    if(pos==-1)
        cout<<-1<<endl;
    else
        cout<<arr[pos]<<endl;
    }
}
