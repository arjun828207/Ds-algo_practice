#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[100];
    int c1=0,c2=0,c3=0;
    cin>>ch;

    for(int i=0;i<strlen(ch);i++)
    {
        switch(ch[i])
        {
            case '1':c1++;
            break;
            case '2':c2++;
            break;
            case '3':c3++;
            break;
        }
    }
    bool first = true;
    for(int i=0; i<c1; i++)
    {
        if(first == true)
        {
            cout<<"1";;
            first = false;
        }
        else
            cout<<"+1";
    }
    for(int i=0; i<c2; i++)
    {
        if(first == true)
        {
            cout<<"2";
            first = false;
        }
        else
            cout<<"+2";
    }
    for(int i=0; i<c3; i++)
    {
        if(first == true)
        {
            cout<<"3";
            first = false;
        }
        else
            cout<<"+3";
    }
}
