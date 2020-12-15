#include<iostream>
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
 int low=0;
 int high=n-1;
 while(low<=high)
 {
     if(arr[low]<0&&arr[high]<0)
     low++;
     if(arr[low]>0&&arr[high]<0)
     {
         int tmp=arr[low];
         arr[low]=arr[high];
         arr[high]=tmp;
         low++;
         high--;
     }
     if(arr[low]>0&&arr[high]>0)
        high--;
    if(arr[low]<0&&arr[high]>0)
    {
        low++;
        high--;
    }
 }
 for(int i=0;i<n;i++)
 {
     cout<<arr[i]<<" ";
 }
}
