#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stack<char> si;
    for(int i=0;i<s.length();i++)
    {
        si.push(s[i]);
    }   
    while(si.empty()==false)
    {
        cout<<si.top();
        si.pop();
    }
}