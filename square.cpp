#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number for square root:";
    cin>>n;
    int low=1,high=n,res=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int msq=mid*mid;
        if(msq==n)
            res=mid;
        else if(msq>n)
            high=mid-1;
        else//if msq<n
        {
            low=mid+1;
            res=mid;//store the nearest result
        }
    }
    cout<<res;

}
