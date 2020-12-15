
#include <iostream>
using namespace std;
int maxSum(int a[],int n)
{
    int sum=a[0];
    int maxend=a[0];
    for(int i=1;i<n;i++)//-2 5 -9 1
    {
        if(maxend+a[i]>a[i])
        maxend=maxend+a[i];
        else
        maxend=a[i];
        if(maxend>sum)
        sum=maxend;
    }
    return sum;

}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],ans;
	    for(int i=0;i<n;i++)cin>>a[i];
	    ans=maxSum(a,n);
	    cout<<ans<<endl;

	}
	return 0;
}
