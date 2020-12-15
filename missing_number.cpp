#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
        sum+=array[i];
    }
    int sum2=(n*(n+1))/2;
    cout<<"Missing number is:"<<sum2-sum<<endl;
}