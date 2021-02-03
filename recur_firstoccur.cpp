#include<iostream.h>
using namespace std;
int first(int a[],int size,int x)
{
if(size == 0)
return -1;
if(a[0]==x)
return 0;
int ans=first(a+1,size-1,x);
if(ans==-1)
return -1;
else
return ans+1;
}
int main(){
     int arr[5]={0,2,3,1,1};
    cout<<first(arr,5,5);
}