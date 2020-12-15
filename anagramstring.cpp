#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    string c;
    cin>>c;
    string d;
    cin>>d;
    bool flag=true;
    if(c.length()!=d.length())
    flag=false;
    int cnt[255]={0};
    for(int i=0;i<c.length();i++)
    {
        cnt[c[i]]++;//arjun //int('a')
    }
    for(int i=0;i<c.length();i++)
    {
        cnt[d[i]]--;//arjun
    }
    for(int i=0;i<c.length();i++)
    {
          if(cnt[c[i]]!=0)
          flag=false;
    }
    if(flag==true)
        cout<<"YES";
    else
        cout<<"NO";
}

