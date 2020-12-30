#include <bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
    int n;
    unordered_set <int> s;
    map<int, int>m;
    cin>>n;
    int array1[n];
    int array2[n];
    for(int i=0;i<n;i++)
    {
        cin>>array1[i];
        s.insert(array1[i]);//1 1 6 5
        if(m.count(array1[i]))
        continue;
        else
        {
            m[array1[i]]++;
        }
        
      
    }
     for(int i=0;i<n;i++)
    {
        cin>>array2[i];
        s.insert(array2[i]);
        m[array2[i]]++;
    }
    cout<<"====== union";
    for(auto i:s)
    {
        cout<<i;
    }
    cout<<endl<<"intersection";
    for(auto i:m)
    {
        if(i.second>1)
        cout<<i.first;
    }
}