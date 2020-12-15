#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){


    ll test;
    cin>>test;
    while(test--)
    {
        ll n,x,maxi=0,count=1,ans,flag=0;
        cin>>n>>x;
        ll a[n];
        for (ll i=0;i<n;i++)
        {
            cin>>a[i];
            maxi=max(maxi,a[i]);
        }
        if(x==maxi || x>maxi)
        {
            flag=1;
        }
        else
        {
             while(x<maxi)
                {
                    x= x*2;
                    count++;
                }
            ans=count+n-1;
        }
        if(flag==1) cout<<n<<endl;
        else cout<<ans<<endl;

    }
	return 0;
}
