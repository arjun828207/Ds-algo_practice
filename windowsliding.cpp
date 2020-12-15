/*maximum sum in a given windows using window sliding technique.
1.We will shift each element and simultaneously add one and subtract one.*/
#include<iostream>
using namespace std;
int main()
{
    int arr[7]={0,6,8,90,2,4,3};
    int k=3;
    int sum=0;
    int fin_sum;
    for(int i=0;i<k;i++)
        sum+=arr[i];
    fin_sum=sum;
    for(int i=k;i<7;i++)
    {
        sum+=arr[i]-arr[i-k];
        fin_sum=max(sum,fin_sum);
    }
    cout<<fin_sum;
}
