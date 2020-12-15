/* Program to find the equilibrium index in an array

1.we take the whole sum
2. subtract each element to the sum and add it to leftsum and compare it
#include<iostream>
using namespace std;
int main()
{
    int arr[8]={1,2,3,3};//{0, -3, 5, -4, -2, 3, 1, 0};//
    int sum=0;
    int leftsum=0;
    for(int i=0;i<8;i++)
        sum+=arr[i];

    for(int i=0;i<8;i++)
    {
        sum-=arr[i];
        if(sum==leftsum)
            {
                cout<<i<<" ";

            }
        leftsum+=arr[i];
    }

}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int sum=0;
        int leftsum=0;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        for(int i=0;i<n;i++)
        {
            sum-=arr[i];
        if(sum==leftsum)
            {
                cout<<i;

            }
        leftsum+=arr[i];
        }



    }
}
