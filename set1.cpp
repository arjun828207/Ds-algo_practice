#include<iostream>
#include<set>
using namespace std;
int main()
{
     set <int,greater<int> >s;//int greater is used in order to print the lines in decending order.
    for(int i=0;i<5;i++)
    {
        int c;
        cin>>c;
        s.insert(c);
    }
    for(auto x:s)
    {
        cout<<x<<endl;

    }

}

