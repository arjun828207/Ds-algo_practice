#include<iostream>
using namespace std;
bool primehaikinhi(int digit)
{
    if(digit<=1)
        return false;
    for(int i=2;i<digit;i++)
    {
        if(digit%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n,sum=0,cnt=0;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        if(primehaikinhi(i)==true)
        {
            sum+=i;
        }
    }
    cout<<sum;
}
