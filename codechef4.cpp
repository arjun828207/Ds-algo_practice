#include<bits/stdc++.h>
using namespace std;
#define iint long long int
int main()
{  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n; int y=1;
		map<int,int> q1,q2;
		vector<int> p,p1;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			q1[x]++;
		}
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			q2[x]++;
		}
		for(auto it=q1.begin();it!=q1.end();it++)
		{
			int x=it->first;


			int z=q1[x]+q2[x];


			if(z%2==1)
			{


                        y=0;
            break;
			}
			int k=q1[x]-q2[x];
			if(k<=0)
			  continue;
			k=k/2;


			for(int i=0;i<k;i++)
			 p.push_back(x);

		}
		for(auto it=q2.begin();it!=q2.end();it++)
		{
			int x=it->first;

			int z=q1[x]+q2[x];


			if(z%2==1)
			{
				y=0;
				break;
			}
			int k=(q2[x]-q1[x]);
			if(k<=0)
			  continue;


			k/=2;



			for(int i=0;i<k;i++)
			 p1.push_back(x);

		}




		if(y==0)
		{

                                cout<<-1<<endl;
			continue;
		}



		reverse(p1.begin(),p1.end());


		long long int c=0; int ma=q1.begin()->first;int mb=q2.begin()->first;


		for(int i=0;i<p.size();i++)
		{
			c=c+min(p[i],min(p1[i],min(2*ma,2*mb)));
		}
		cout<<c<<endl;
	}
}
