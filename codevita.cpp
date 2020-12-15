#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    map<char,int> q1,q2;
    char large[500001];
   // gets(large);
   cin>>large;
  int j=strlen(large);
    for(int i=0;i<j;i++)
        q1[large[i]]++;
    int T;
    cin>>T;

    while(T--)
    {
        char small[10001];
        //gets(small);
        cin>>small;
		int k=strlen(small);
        for(int i=0;i<k;i++)
        q2[small[i]]++;
    }
    if(q1==q2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
