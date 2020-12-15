#include<iostream>
using namespace std;
int main()
{
    int arr[6];
    for(int i=0;i<6;i++)
    {
        cin>>arr[i];
    }
    int temp[6];
    int i=0;
    for(int j=0;j<6;j++)
    {
        if(arr[i]<0)
        temp[i++]=arr[i];
    }
    for(int j=0;j<6;j++)
    {
        if(arr[i]>0)
        temp[i++]=arr[i];
    }
    for(int k=0;k<6;k++)
        cout<<temp[k];
}
