#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    char st[100];
    cin>>st;
    int j=strlen(st);
    map<char,int> m;
    for(int i=0;i<j;i++)
    {
        m[st[i]]++;
    }
    for(auto x:m)
    {
        if(x.second>1)
        cout<<x.first;
    }
}
