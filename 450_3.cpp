#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
 {
     cin>>arr[i];
 }
 int cnt0=0,cnt1=0,cnt2=0;
  for(int i=0;i<n;i++)
 {
     if(arr[i]==0)
     cnt0++;
     else if(arr[i]==1)
     cnt1++;
     else if(arr[i]==2)
     cnt2++;
 }
 //cout<<"   "<<cnt0<<"  "<<cnt1<<"   "<<cnt2<<endl;
 while(cnt0>0)
 {
     cout<<0<<" ";
    cnt0--;
 }
 while(cnt1>0)
 {
     cout<<1<<" ";
     cnt1--;
 }
 while(cnt2>0)
 {
     cout<<2<<" ";
     cnt2--;
 }
}
