#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int> mp;
    for(int i=0;i<5;i++)
    {
        int n;
        cin>>n;
        mp[n]++;
    }
    cout<<"=============="<<endl;
    for(auto x:mp)
    {
        if(x.second>1)
            cout<<x.first;
    }
}
