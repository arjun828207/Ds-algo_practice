
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    char st[100];
    gets(st);
    char se[100];
    int j=0;
    for(int i=0;i<strlen(st);i++)
    {
        if(st[i]==' ')
            continue;
        else
            se[j++]=st[i];
    }
    cout<<se;

}
