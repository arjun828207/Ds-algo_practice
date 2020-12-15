#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int da,ch;
        cin>>da>>ch;
        while(da>0&&ch>0)
        {
            da=da-ch;
            ch/=2;
           // cout<<da<<" "<<ch<<endl;
        }
        if(ch==0&&da>0)
            cout<<0<<endl;
        else
            cout<<1<<endl;
    }
}
