/*Find the majority element in an array . Whether it occurs n/2 times or not*/
#include<iostream>
using namespace std;
/*int main()
{
    int arr[7]={2,5,6,2,3,7,2};
    int cnt;
    for(int i=0;i<7;i++)
    {
        cnt=1;
        for(int j=i+1;j<7;j++)//dual loop approach
        {
            if(arr[i]==arr[j])
                cnt++;
        }
        if(cnt>=(7/2))
        {
        cout<<arr[i];
        break;
        }
    }
}*/
int main()//O(n) approach
{
int arr[7]={8,8,6,6,6,4,6};
int res=0;
int cnt=1;
//find out the majority
for(int i=0;i<7;i++)
{
    if(arr[i]==arr[res])
        cnt++;
    else
        cnt--;
    if(cnt==0)
    {
        cnt=1;
        res=i;

    }
}
cnt=0;
//a check for majority
int f_res=arr[res];
for(int i=0;i<7;i++)
{
    if(arr[i]==arr[res])
        cnt++;
}
    if(cnt<=(7/2))
        cout<<-1;
    else
        cout<<f_res;
}
