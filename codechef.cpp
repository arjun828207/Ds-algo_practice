#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int chef,morty;
        int chefscore=0,mortyscore=0;
        for(int i=0;i<n;i++)
        {  int chef_pow=0,morty_pow=0;
            cin>>chef>>morty;
            while (chef != 0) {
      chef_pow = chef_pow + chef % 10;
      chef = chef / 10;
        }
   while (morty != 0) {
      morty_pow = morty_pow + morty % 10;
      morty = morty / 10;
            }
             if(chef_pow>morty_pow)
                chefscore++;
             else if(chef_pow<morty_pow)
                mortyscore++;
            else if(chef_pow==morty_pow)
            {
                chefscore++;
                mortyscore++;
            }
        }
        if(chefscore>mortyscore)
            cout<<0<<" "<<chefscore<<endl;
        else if(chefscore<mortyscore)
            cout<<1<<" "<<mortyscore<<endl;
        else
            cout<<2<<" "<<chefscore<<endl;



    }
}

