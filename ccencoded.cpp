#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string k;
     for(int i=0; i<s.size();i+4)
    {
        if((i+4)==s.size())
        k=s.substr(i);
        else
        k=s.substr(i,i+4);
    }
    int start=0;
    int mid=0;
    string full="abcdefghijklmnop";
    int end=full.length();
    string ans;
    for(int j=0;j<s.length();j++)
    {
        if(s[j]=='0')
        {
            mid=(start+end)/2;
            ans=full.substr(start,end);
            end=mid;
        }
        else
        {
            mid=(start+end)/2;
            ans=full.substr(mid,end);
            start=mid;
        }
    }
    
}