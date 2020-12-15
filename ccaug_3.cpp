#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char st[1000];
        char pt[1000];
        cin>>st;
        cin>>pt;
        for(int i=0;i<strlen(pt);i++)
        {
            for(int j=0;j<strlen(st);j++)
            {
                if(st[i]==pt[j])
                    st[i]='-';
            }
        }
        cout<<st;
    }
}
