//two pointer approach to find the required values to obtain a sum
#include<iostream>
using namespace std;
int main()
{
    int arr[7]={1,6,8,10,12,14,20};
    int low=0,high=6;
    int sum=7;
    bool flag=false;
    while(low<=high)
    {
        if(arr[low]+arr[high]==sum)
        {
            flag=true;
            break;
        }
        else if(arr[low]+arr[high]>sum)
            high--;
        else
            low++;

    }
    cout<<flag;

}
