/*	Move	all	the	negative	elements	to	one	side	of	the	array.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6],neg[6],pos[6];
    for(int i=0;i<6;i++)
        cin>>arr[i];

    int x=0;
    int y=0;
    for(int i=0;i<6;i++)
    {
        if(arr[i]<=0)
            neg[x++]=arr[i];
        else
            pos[y++]=arr[i];
    }
  /*  for(int i=0;i<x;i++)
        cout<<neg[i]<<" ";
    cout<<endl;
    for(int i=0;i<y;i++)
        cout<<pos[i]<<" ";*/
    int q=0;
    int r=0;
    while(x>0)
    {
        arr[q++]=neg[r++];
        x--;
    }
    r=0;
    while(y>0)
    {
        arr[q++]=pos[r++];
        y--;
    }
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
}
