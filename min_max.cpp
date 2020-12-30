#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int k2=k;
    int arr2[n];
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
        arr2[i] =array[i];
    }
    int max=array[0];
    int min=arr2[0];
   while(k--) 
   { 
       int tmp;
       for(int i=0;i<n;i++)
    {
        
        if(array[i]>max)
        {
        max=array[i];
        tmp=i;
       
         array[tmp]=-1;
        }        
    }
   
    
   }

cout<<max;
//cout<<min<<" "<<max;
}