#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,p,k;
		cin>>n>>x>>p>>k;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		int pp=a[p-1];
		if(k<p && x<pp)
		{
			cout<<"-1\n";
			continue;
		}
		else if(k<=p && x>=pp)
		{
			int c=0;
			for(int i=n-1;i>=p-1;i--)
			{
				if(a[i]<x)
				c++;
			}
			cout<<c<<"\n";
			continue;
		}
	    if(k>p && x>pp)
		{
			cout<<"-1\n";
			continue;
		}
		else if(k>=p && x<=pp)
		{
			int c=0;
			for(int i=0;i<p;i++)
			{
				if(a[i]>x)
				c++;
			}
			cout<<c<<"\n";
			continue;
		}
	}
}
