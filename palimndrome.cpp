
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

       if(st[low]==st[high])
       {
        low++;
        high--;
       }
       else
       {
           cout<<"NOT PALIMNDROME";
           exit(1);
       }

    }
    puts("PALIMNDROME");

}
