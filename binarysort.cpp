/* sorting a binary array in one pass.
1.take index =0
2.if value of array is 0 then swap with arr[index] and incement j*/
#include<iostream>
using namespace std;
int main()
{
    int arr[21]={1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0 };
    int index=0;
    for(int i=0;i<21;i++)
    {
        if(arr[i]==0)
        {
            swap(arr[i],arr[index++]);
        }
    }
    for(int i=0;i<21;i++)
    {
        cout<<arr[i];
    }
}
