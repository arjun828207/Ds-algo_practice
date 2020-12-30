#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int target;
    vector<int> v;
    unordered_map<int,int> mp;
    for(int i=0; i<n;i++)
    cin>>arr[i];
    cout<<"enter target:";
    cin>>target;
    for(int i=0; i<n;i++)
    {
        if(mp.find(target-arr[i])!=mp.end())//seeing if there exists number to be added to get targt
        {
            v.push_back(i);
            v.push_back(mp[target-arr[i]]);
        }
        mp[arr[i]]=i;//store the number as well as the index of the number
    }
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
}