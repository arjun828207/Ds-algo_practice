#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    string str="bcxz";//zcxa
    int n=str.size()-1;
    bool flag=true;
    cout<<"size"<<n<<endl;
    for(int i=0;i<n;i++)
    {
        if((abs(int(str[i]-str[i+1])))!=(abs(int(str[n-i]-str[n-i-1]))))
        {
            flag=false;
            break;
        }
    }
    cout<<flag;
}

