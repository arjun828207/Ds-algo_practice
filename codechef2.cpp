#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
            map<int, int> mp;
    map<int,int>mp2;
        int n;
        scanf("%d",&n);
        int f=4*n;
        int fin_n=f-1;
        int x,y;
       // cout<<fin_n;
        for(int i=0;i<fin_n;i++)
        {
            scanf("%d",&x);
            mp[x]++;
            scanf("%d",&y);
            mp2[y]++;

        }
        for(auto x:mp)
        {
            if(x.second%2!=0)
              {
                  printf("%d ",x.first);
                break;
              }
        }
            for(auto x:mp2)

            {
                if(x.second%2!=0)
                {

                    printf("%d\n",x.first);
                    break;
                }
            }
    }
}
