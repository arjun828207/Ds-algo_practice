#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int arr[6];
    int i=0;
    arr[i++]=a+b*c;
    arr[i++]=a*(b+c);
    arr[i++]=a*b*c;
    arr[i++]=(a+b)*c;
    arr[i++]=a+b+c;
    arr[i++]=a*b+c;
    sort(arr,arr+4);
    cout<<arr[5];
}


