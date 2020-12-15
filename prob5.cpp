/*Find	the	Union	and	Intersection	of	the	two	sorted	arrays.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[5]={1,3,4,5,7};
    int arr2[4]={2,3,5,6};
    int i=0,j=0;
    while(i<5&&j<4)
    {
        if(arr1[i]<arr2[j])
            cout<<arr1[i++];
        else if(arr1[i]>arr2[j])
            cout<<arr2[j++];
        else
        {
           cout<<arr1[j++];
            i++;
        }
    }
    while(i<5)
        cout<<arr1[i++];
    while(j<4)
        cout<<arr2[j++];
}
