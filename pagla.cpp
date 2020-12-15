#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int s[10000],t[10000];
        char str[1000];
        cin>>str;
        int x=0;
        for(int i=1;i<strlen(str);i++)
        {
            s[x]=abs(int(str[i]))-(int(str[i-1]));
            x++;
        }
        x=0;
        for(int i=strlen(str)-1;i>=0;i--)
        {
            t[x]=abs((int(str[i]))-(int(str[i-1])));
            x++;
        }
        int c=0;
        for(x=0;x<strlen(str)-1;x++)
        {
            if(s[x]==t[x])
            {
                c++;
            }
        }
         if(c==x)
           {
               cout<<"Funny"<<endl;
           }
           else
           {
               cout<<"Not Funny"<<endl;
           }

    }
    return 0;
}
