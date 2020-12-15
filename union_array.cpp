#include<iostream>
#include<set>
using namespace std;
int main()
{
    int arr1[7]={10,20,30,40,5,0,1};
    int arr2[7]={20,1,0,95,87,20,35};
    set <int> s;
    for(int i=0;i<7;i++)
    {
        s.insert(arr1[i]);
        s.insert(arr2[i]);
    }
    for(auto x:s)
    {
        cout<<x<<endl;
    }
}
