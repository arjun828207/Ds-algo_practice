#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int maxj=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int f,t;
        cin>>f>>t;
        if(t>k)
            maxj=max(maxj,f-t+k);
        else
            maxj=max(maxj,f);
    }
    cout<<maxj;
}
