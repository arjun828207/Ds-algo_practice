#include<iostream>
using namespace std;
int main()
{
   int n,sum=0;
   cin>>n;
   int arr1[n],arr2[100000];
   for(int i=0; i<n; i++) 
   {
       cin>>arr1[i];
   }
   int k=0;
   for(int i=0; i<n; i++)
   {
       for(int j=0; j<n; j++)
       {
           sum=arr1[i]+arr1[j+1]+sum;
           arr2[k]=sum;
           k++;
            
       }
   }
 
   int max=arr2[0];
   for(int i=0;i<k;i++)
   {
       if(arr2[i]>max)
       {
           max=arr2[i];
          
       }
   }
   
   cout<<max<<endl;
   
}