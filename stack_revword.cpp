#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string:";
    getline(cin,s);
    stack<char> c;
    for(int i=s.length()-1;i>=0;i--)
    {
        if(s[i]!=' ')
        c.push(s[i]);
        else if(s[i]==' ')
        {
            while(c.empty()==false)
            {
                cout<<c.top();
                c.pop();
            }
            cout<<' ';

        }
    }
    while(c.empty()==false)
    {
         cout<<c.top();
                c.pop();
    }
}