#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,arr[50];
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+(n+1));
	for(int i=1;i<=n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
