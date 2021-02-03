#include<bits/stdc++.h>
using namespace std;
bool is_sorted(int a[],int size)
{
    if(size==0||size==1)
    {
        return true;
    }
    if(a[0]>a[1])
    return false;
    bool issmall=is_sorted(a+1,size-1);
    return issmall;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    cout<<is_sorted(arr,5);


}