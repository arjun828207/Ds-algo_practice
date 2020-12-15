#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size"<<endl;
    int n;
    cin>>n;
    int arr[n];
    int k;
    cout<<"value of k";
    cin>>k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int diff=0;
    bool flag=true;
    int pre=-1;
    int fro=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            fro=i;
            if(pre==-1)
            {
                pre=i;
            }
            else
            {
                diff=fro-pre;
                pre=i;
                if(diff-1<k)
                {
                    flag=false;
                }
            }


        }



    }
    if(flag==true)
        cout<<"True";
    else
        cout<<"False";

}
