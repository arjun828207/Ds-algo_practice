#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int bst=1,wrst=1;
        int arr[n];
        int t[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int x=0;
        for(int i=0;i<n;i++)
        {
            t[i]=i+(arr[i]*x);
           // cout<<t[i]<<" ";
        }
        x++;
        int i=0;
        while(t[i]==t[i+1])
        {
            //cout<<"In ist while loop:";
            bst++;
            i++;
        }
        i=n;
        while(t[i-1]==t[i-2])
        {   //cout<<"In 2nd while loop";
            wrst++;
            i--;
        }
        cout<<bst<<" ";
        cout<<wrst<<endl;
    }
}
