#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    char st[100];
    map<char,int> s;
    cin>>st;
    for(int i=0;i<strlen(st);i++)
    {
        s[st[i]]++;
    }
    for(auto x:s)
    {
        cout<<x.first;
    }
}
