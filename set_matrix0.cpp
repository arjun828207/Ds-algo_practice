#include<bits/stdc++.h>
using namespace std;
int main()
{
    //section for input and diplay
    int arr[3][3]={
        {1,1,1},
        {1,1,1},
        {1,1,0}
    };
    for(int i=0;i<3;i++)//printing
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"--------------------------------"<<endl;
     for(int i=0;i<3;i++)//printing
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==0)
            {
                for(int x=0;x<3;x++)
                {
                    if(arr[x][j]==0)
                    continue;
                    else
                    arr[x][j]=-1;                
                }
                 for(int x=0;x<3;x++)
                {
                    if(arr[i][x]==0)
                    continue;
                    else
                    arr[i][x]=-1;                
                }
            }
        }
        
    }
     for(int i=0;i<3;i++)//printing
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==-1)
            {
                arr[i][j]=0;
            }
        }
        
    }

    for(int i=0;i<3;i++)//printing
    {
        for(int j=0;j<3;j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
}
