/*let s1 equal main string and s2 substring now we have to find smallest lexicographically string that contain s2 as a substring .
Because of anagram we delete all character of s2 from s1 because s2 is fix now
let s1=ababcd
pt=dc
string after stemp=s1-pt=abab now what is smallest =aabb now we have to insert pt in stemp so that we get smallest
some example-
s1+aabb
a+pt+abb
aa+pt+bb
aab+pt+b
aabb+pt
print minimum of all these string
That will give TLE so for avoid TLE
sleft+pt+sRight
sleft which have maximum element pt[0]
sRight which have minimum element greater than pt[0]

Corner test case-
s1=zzzety
pt=ze
sleft=which have maximum element less than pt[0]
sright=which have minimum element pt[0]

so minimum of both case will be answer

Solution of Smallest KMP-*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
		string s1,pt,s;
		cin>>s1>>pt;

		ll n=s1.size(),m=pt.size();


                ll al[27];memset(al,0,sizeof(al));
	ll al1[27];


                    for(int i=0;i<n;i++)
		{
			al[s1[i]-'a']++;

		}
		for(int i=0;i<m;i++)
		{
			al[pt[i]-'a']--;
		}
                for(int i=0;i<26;i++)
		al1[i]=al[i];

                    for(int i=0;i<=(pt[0]-'a');i++)
		{
			while(al[i]>0)
			{
    s+=(char)(i+97);
                                al[i]--;

			}

		}


		s+=pt;
		for(int i=0;i<26;i++)
		{
			while(al[i]>0)
			{
				s+=(char)(i+97);
				al[i]--;
			}
		}
		string saf;
                            for(int i=0;i<pt[0]-'a';i++)
		{
			while(al1[i]!=0)
                    {
    saf+=(char)(i+97);
                                al1[i]--;
			}
		}
		saf+=pt;

		for(int i=0;i<26;i++)
		{




                            while(al1[i]!=0)
    {
                            saf+=(char)(i+97);

            al1[i]--;
                                }
		}
		cout<<min(s,saf)<<"\n";
	}
}
