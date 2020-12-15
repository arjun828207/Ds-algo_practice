/*Given	an	array	which	consists	of	only	0,	1	and	2.	Sort	the	array	without
using	any	sorting	algorithm.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6];
    int c0=0,c1=0,c2=0;
    for(int i=0;i<6;i++)
        cin>>arr[i];
    for(int i=0;i<6;i++)
    {
        switch(arr[i])
        {
        case 0:
            c0++;
            break;
        case 1:
            c1++;
            break;
        case 2:
            c2++;
            break;
        }
    }
    int i=0;
    //cout<<c0<<" "<<c1<<" "<<c2;
     while(c0>0)
     {
        arr[i++]=0;
        c0--;
     }
     while(c1>0)
     {
        arr[i++]=1;
        c1--;
     }
     while(c2>0)
     {
        arr[i++]=2;
        c2--;
     }
     for(int j=0;j<6;j++)
     {
         cout<<arr[j]<<endl;
     }


}
