#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int flag=0;
        int n,k,x,y;
        cin>>n>>k>>x>>y;
        for(int i=0;i<n;i++)
        {
            if(((x+k)%n)==y)
            {
                flag=1;
                break;
            }
            else
                x=(x+k)%n;
        }
        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
