
#include<bits/stdc++.h>
#define int      long long int
#define endl     '\n'



using namespace std;

int32_t main()
{
 ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
 int T;
 cin>>T;
 while(T--)
 {
    int num,axe;
    cin>>num>>axe;
    vector<int> array1(num);
    for(int& i:array1)
    cin>>i;
    sort(array1.begin(),array1.end());
    vector<int>::iterator it = lower_bound(array1.begin(), array1.end(), axe);

    int lower_bound = it - array1.begin();
    int size_d=0;
    for(int i=lower_bound;i<num;i++)
    {
    	if(axe<array1[i])
    	{
    		while(axe<array1[i])
    		{
    			axe=2*axe;
    			size_d++;
    		}
    		size_d++;
    	}
    	else
    	size_d++;
    	axe=2*array1[i];
    }
    int tot=lower_bound+size_d;
    if(lower_bound!=0)
    {
    	size_d=0;
    	lower_bound--;
    	for(int i=lower_bound;i<num;i++)
    	{
    		if(axe<array1[i])
    		{
    			while(axe<array1[i])
    			{
    				axe=2*axe;
    				size_d++;
    			}
    			size_d++;
    		}
    		else
    		size_d++;
    		axe=2*array1[i];
    	}
    	int res=min(size_d+lower_bound,tot);
    	cout<<res<<endl;
    }
    else
    cout<<tot<<endl;
 }
 return 0;
}
