#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{


 //   ios_base::sync_with_stdio(false);
   // cin.tie(NULL);
    ll T;
    cin>>T;
    while(T--)
    {
        ll n,k;
        cin>>n>>k;


                ll a[n+1];


                map<ll,ll>q1;
                    ll ans=0,vc=0,t=1;

                    for(int i=0;i<n;i++)
                        cin>>a[i];


        ll col[n+1][n+1]={0};
                    for(ll i=0;i<n;i++)
        {
                    for(ll j=0;j<n;j++)
                        col[i][j]=0;
        }


        for(int i=0;i<n;i++)
        {

            q1.clear();


                    for(ll j=i;j<n;j++)


            {


                col[i][j]=(j==0)?0:col[i][j-1];



                if(q1.count(a[j]))

                {



                        if(q1[a[j]]==1)


                                {
        col[i][j]++;
                                }




                    col[i][j]++;


                                    }
                q1[a[j]]++;



            }

        }

    ans=1e18;
    ll table=100;


    ll dp[101][1001]={0};


    for(int i=0;i<=table;i++)
    {



        for(int  j=0;j<=table;j++)

        {


            dp[i][j]=0;



        }
    }
    for(int i=0;i<n+1;i++)
        dp[1][i]=col[0][i-1];
    for(int i=2;i<=table;i++)
    {
        dp[i][1]=0;
    }
    for(int i=2;i<=table;i++)
    {
        for(int j=2;j<=n;j++)
        {
            ll best=1e18;
            for(int p=1;p<j;p++)
            {
                best=min(best,dp[i-1][p]+col[p][j-1]);
            }
            dp[i][j]=best;
        }
    }
    for(table =1;table<=100;table++)
    {
        ans=min(table*k+dp[table][n],ans);
    }
    cout<<ans<<"\n";

    }

}
