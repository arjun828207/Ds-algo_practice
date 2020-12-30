#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int m,n;
        cin>>m>>n;
        int arr1[m];
        int arr2[n];
        int sm1=0,sm2=0;
         for(int i=0;i<m;i++)
        {
            cin>>arr1[i];
        }
         for(int i=0;i<n;i++)
        {
            cin>>arr2[i];
        }
        for(int i=0;i<m;i++)
        {
            sm1+=arr1[i];
        }
        for(int i=0;i<n;i++)
        {
           
            sm2+=arr2[i];
        }
       // cout<<"sm1 "<<sm1<<"sm2 "<<sm2<<endl;
        if(sm1>sm2)
        cout<<"C1"<<endl;
        else
        {
            cout<<"C2"<<endl;
        }
        
        
    }
}