#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long   int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
            long long int n,k,s;
        cin>>n>>k>>s;
        if(k==s)
        {
            cout<<"Case #"<<i<<":"<<n<<endl;
            return 0;
        }
       long long  int fix= k-1;
       long long int x1=fix+1+n;
       long long  int x2=k-s+n-s+1+fix;
        int sol;
        sol=min(x1,x2);
        cout<<"Case #"<<i+1<<": "<<sol<<endl;
    }

    return 0;
}
