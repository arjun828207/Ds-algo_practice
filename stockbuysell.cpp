#include<bits/stdc++.h>
using namespace std;
int main()
{
    int array[5]={1,5,3,6,4};
    int maxpro=0;
    int minprice=INT_MAX;
    for(int i=0;i<5;i++)
    {
        minprice=min(minprice,array[i]);
        maxpro=max(maxpro,array[i]-minprice);
    }
    cout<<maxpro<<endl;
}