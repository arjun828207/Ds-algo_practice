
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[100];
    char s2[100];
    cin>>s1;
    cin>>s2;
    int flag=0;
    for(int i=0;i<strlen(s1);i++)
    {
        if(int(s1[i])==int(s2[i])||int(s1[i])+32==int(s2[i])||int(s1[i])==int(s2[i])+32)
            flag=0;
        else
        {
            flag=-1;
            break;
        }
    }
    cout<<flag;
}
