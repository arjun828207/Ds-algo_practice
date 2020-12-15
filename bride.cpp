#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<char,int> m;
    for(int i=0;i<n;i++)
{
    char x;
    cin>>x;
    m[x]++;
}
for(int i=0;i<n;i++)
{
    char x;
    cin>>x;
    m[x]--;
}
    int sum=0;
for(auto x:m)
{
    if(x.second!=0)
    sum=sum+abs(x.second);
}
cout<<sum<<endl;
}
