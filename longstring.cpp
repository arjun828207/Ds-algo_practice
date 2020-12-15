
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char chr[100];
        cin>>chr;
        if(strlen(chr)>10)
        cout<<chr[0]<<strlen(chr)-2<<chr[strlen(chr)-1]<<endl;
        else
            cout<<chr<<endl;
    }
}
