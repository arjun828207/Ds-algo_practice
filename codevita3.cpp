#include<bits/stdc++.h>
using namespace std;
int main()
{
    int no;
    cin>>no;
    if(no==0)
    {
        cout<<0<<endl;
        return 0;
    }
    if(no==1)
    {
        cout<<1.000<<endl;
        return 0;
    }
   long long int arr[no];





    for(long long int i=0;i<no;i++)
        cin>>arr[i];


    sort(arr,arr+no);


    long double res=0;



            for(long long int i=0;i<no;i++)
    {
        res+=(1.0)/(no-i);
    }
    cout<<fixed<<setprecision(6)<<res;


}
