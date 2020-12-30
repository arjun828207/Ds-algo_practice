#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(array[i]<0&&array[j]>=0)
            swap(array[i],array[j]);
        }
    }
    for(int i=n-1; i>=0; i--)
    {
        cout<<array[i]<<" ";
    }
}