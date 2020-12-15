#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
     int n,m;
     int n_dig,m_dig;
     cin>>n>>m;
     if(n%9==0)
     {
         n_dig=n/9;
     }
     else
     {
         n_dig=(n/9)+1;
     }
     if(m%9==0)
     {
         m_dig=m/9;
     }
     else
     {
         m_dig=(m/9)+1;
     }
     if(m_dig==n_dig)
        cout<<1<<" "<<1<<endl;
     else if(m_dig<n_dig)
        cout<<1<<" "<<m_dig<<endl;
     else if(m_dig>n_dig)
        cout<<0<<" "<<n_dig<<endl;
 }
}
