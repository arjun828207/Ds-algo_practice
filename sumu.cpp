#include <iostream>
using namespace std;
int sumZero(long long int a[],long long int n)
{

    for(int i=0;i<n;i++)
        {
             long long int sum=0;
            for(int j=i;j<n;j++)
            {
                sum=sum+a[j];
                if(sum==0)
                return sum;
            }
        }
  return -1;
}

int main() {
	//code int t;
	int t;
    cin>>t;
    while(t--)
    {
        long long int n,ans;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        ans=sumZero(a,n);
        if(ans==-1)
        cout<<"No"<<endl;
        else
        cout<<"Yes"<<endl;
    }
	return 0;
}
