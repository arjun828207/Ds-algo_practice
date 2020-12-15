#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    bool flag=true;
    getline(cin,s);
    stack <char> x;
    for(int i=0;i<s.length();i++)
        x.push(s[i]);
    for(int i=0;i<s.length();i++)
    {
        if(x.top()==s[i])
        {
            x.pop();
        }
        else
        {
            flag=false;
            break;
        }      
    }
    cout<<flag;   
}