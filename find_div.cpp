#include<bits/stdc++.h>
using namespace std;
int find(int,int,int);
int main()
{
    int a,b,div;
    cin>>a>>b>>div;
    cout<<find(a,b,div);
}
int find(int a,int b,int div)
{
    int c=0;
    for(int i=a;i<=b;i++)
    {
        if(i%div==0)
        c++;

    }
    return c;
}