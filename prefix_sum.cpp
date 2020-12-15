/*Program to find out prefix sum and print it*/
#include<iostream>
using namespace std;
int main()
{
    int arr[4]={10,4,30,6};
    int sum[4];
    sum[0]=arr[0];
    for(int i=1;i<4;i++)
        sum[i]=sum[i-1]+arr[i];
    for(int i=0;i<4;i++)
        cout<<sum[i]<<" ";
}
