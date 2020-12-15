/*Find	all	pairs	on	integer	array	whose	sum	is	equal	to	given	number*/
#include<iostream>
using namespace std;
int main()
{
    int n,sum,cnt=0;
    cin>>n>>sum;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(sum==arr[i]+arr[j])
                cnt++;
        }
    }
    cout<<cnt;
}
