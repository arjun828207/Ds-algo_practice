#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool flag=true;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    sort(array,array+n);
    for(int i=0;i<n;i++)
    {
        if(array[i]==array[i+1])
        flag=false;
    }
    if(flag==true)
    {
        cout<<"No duplicates";
    }
    else
    {
        cout<<"duplicates";
    }
        
}