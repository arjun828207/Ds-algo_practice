#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    char st[100];
    char a[100];
    char b[100];
    cin>>st;
    cin>>a;
    cin>>b;
    bool flag=true;
    while (st != 0)
    {
        if (a == st)
            a++;
        else if (b == st)
            b++;
        else
            flag=false;
        st++;
    }
    cout<<flag;


}
