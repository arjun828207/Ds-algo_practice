#include <bits/stdc++.h>
using namespace std;
int main()
{
     int arr[10]={1,2,2,3,3,4,4,4,5,5};
    //  set <int> s;
    //  for(int i=0;i<10;i++)
    // {
    //     s.insert(arr[i]);
    // }

    int i=0;//first pointer 
    for(int j=1;j<10;j++)//2nd pointer is j
    {
        if(arr[i]!=arr[j])//if both has different values then swap copy the item in j;
        {
            i++;
            arr[i] = arr[j];
        }

    }
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<i+1;
    // for(auto x:s)
    // {
    //     cout<<x;
    // }
    // cout<<s.size()<<endl;
}