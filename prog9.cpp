/*Find	duplicates	in	an	array.*/
#include<iostream>
using namespace std;
int main()
{
    int n,r;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(arr[i]==arr[j])
                r=i;
                exit(0);//comparing the outer and inner loop
        }
    }
    cout<<r;
}

