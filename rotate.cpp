#include <iostream>
using namespace std;

int main() {
int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    int ar[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>ar[i];
	    }
	    cout<<ar[n-1]<<" ";
	     for(int i=0;i<n-1;i++)
	        cout<<ar[i]<<" ";
	    cout<<endl;
	}
	return 0;
}