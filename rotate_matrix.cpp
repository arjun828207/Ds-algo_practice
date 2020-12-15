#include<bits/stdc++.h>
using namespace std;
void transpose(int A[3][3]) 
{ 
    for (int i = 0; i < 3; i++) 
        for (int j = i+1; j < 3; j++) 
            swap(A[i][j], A[j][i]); 
} 
int main()
{
    //section for input and diplay
    int arr[3][3]={
        {10,98,22},
        {17,16,12},
        {91,41,50}
    };
    cout<<"Before rotating 90 clockwise"<<endl;
     for(int i=0;i<3;i++)//printing
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"--------------------------------"<<endl;
    transpose(arr);
    for(int i=0;i<3;i++)//reversing the rows
    {
        int low=0;
        int high=2;
        while(low<high)
        {
            swap(arr[i][low],arr[i][high]);
            low++;
            high--;
        }
    }
    cout<<"After rotating 90 clockwise"<<endl;
    for(int i=0;i<3;i++)//printing
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}