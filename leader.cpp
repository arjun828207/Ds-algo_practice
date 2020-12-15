#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    long long int a[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	    for(int i=0;i<n;i++)
	    {
	        int flag=0;
	        for(int j=i+1;j<n;j++)
	        {
	            if(a[j]>a[i])
	            {
	                flag=1;
	                break;
	            }
	        }
	        if(flag==0)
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
