
#include <iostream>
using namespace std;
void maxOne(int a[],int n)
{
    int res=0,coun=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0) coun=0;
        else
        {
            coun++;
            if(coun>res)
                res=coun;
        }
    }
    cout<<res;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    maxOne(arr,n);
return 0;
}
