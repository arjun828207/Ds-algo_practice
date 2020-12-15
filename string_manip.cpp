#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    cout<<"Initial string is ";
    cout<<s;
    int key;
    cin>>key;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        continue;
        else
        {
            s[i]=s[i]+key;
        }
    }
    cout<<"Final string is ";
    cout<<s;
}