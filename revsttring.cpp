
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    char st[100];
    gets(st);
    int low=0;
    int high=strlen(st)-1;
    char s;

    while(low<high)
    {

        s=st[low];
        st[low]=st[high];
        st[high]=s;
        low++;
        high--;

    }
    puts(st);

}
