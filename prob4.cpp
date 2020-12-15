
/*	Find transition point in an sorted array.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6];int pos;
    for(int i=0;i<6;i++)
        cin>>arr[i];
    for(int i=0;i<6;i++)
    {
        if(arr[i]!=arr[i+1])
        {
        pos=i+1;
        break;
        }
    }
    cout<<pos;
}
