#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int k;
    cin>>k;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int page=1;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=arr[i];j++)
        {
          if(j==page)
          {
              cnt++;
          }
          if(j%k==0||j==arr[i])
            page++;
        }
    }
    cout<<cnt;

}
