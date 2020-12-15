/*Given a binary array, we need to find the minimum of number of group
flips to make all array elements same.  In a group flip, we can flip any set of consecutive 1s or 0s.
RULE: Whatever is the second group we need to flips those element*/
#include<iostream>
using namespace std;
int main()
{
    int arr[7]={1,0,0,0,1,0,1};
    for(int i=1;i<7;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            if(arr[i]!=arr[0])
                cout<<"From "<<i<<" To ";//1 3   5 5
            else
                cout<<i-1;
        }
    }
    if(arr[7-1]!=arr[0])//if the last digit is single group eg.1 1 000 1 1 0
    {
        cout<<7-1<<endl;
    }
}
