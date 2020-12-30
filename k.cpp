#include<iostream>
using namespace std;
int main()
{
    int arr[100][100];
    int n,m,x,y;
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==0)
            {
                x=i;
                y=j;

            }
        }
        
    }
    for(int j=0;j<m;j++)
    {
        arr[x][j]=0;
    }
    for(int i=0;i<n;i++)
    {
        arr[i][y]=0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;

}