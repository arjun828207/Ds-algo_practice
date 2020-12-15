#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    string s="We promptly judged antique ivory buckles for the next prize";
     //    string s="abcdefg ijklmnopqrstuvwxyz";
     set<char> mp;
     set <char> :: iterator itr;
    for(int i=0;i<s.size();i++)
    {
        //if(s[i]==' ')
          //  continue;
        mp.insert(tolower(s[i]));
    }
    if(mp.size()!=27)
    {
        cout<<"not pangram"<<endl;
    }
    else
        cout<<"pangram"<<endl;
   for (itr = mp.begin(); itr != mp.end(); ++itr)
    {
        cout <<  *itr<<"--";
    }
}
