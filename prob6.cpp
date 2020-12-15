/*2. Write	a	program	to	cyclically	rotate	an	array	by	one.*/
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
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int tmp=arr[n-1];
    for(int i=n;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=tmp;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


}
