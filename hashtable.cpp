#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		map<int,int> q1,q2;
		int x;
		scanf("%d",&x);
		int y=4*x-1;
		int n,m;
		for(int i=0;i<y;i++)
		{
			scanf("%d",&n);
			q1[n]++;
			scanf("%d",&m);
			q2[m]++;
		}
		for(auto d:q1)
		{
			if (d.second%2!=0)
			{
				printf("%d ",d.first);
				break;
			}
		}
		for(auto d:q2)
		{
			if (d.second%2!=0)
			{
				printf("%d\n",d.first);
				break;
			}
		}
	}
}
