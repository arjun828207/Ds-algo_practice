#include<iostream>
using namespace std;
int main()
{
    string s,t="hello";
    int j=0,pass=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==t[j])
        {
            j++;
            pass++;
        }
        if(pass==5)
        {
            break;
        }
    }
    if(pass==5)
        cout<<"YES";
    else
        cout<<"NO";
}
