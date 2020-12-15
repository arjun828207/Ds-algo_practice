
#include<stdio.h>
#include<string.h>
char words[1001][11];
char* str;
int flag;
void autopsy(char* str, int m)
{

        if(strcmp(str,'\0')==0)
                flag = 1;
        int len, i;
        for(i = 0; i < m; i++)
        {
                len = strlen(words[i]);
                if(strncmp(words[i], str, len)==0)
                {
                        *str += len;
                        autopsy(str, m);
                }
        }
        if(flag == 1)
                printf("YES\n");
        else
                printf("NO\n");
}

int main()
{
        int m, l, i;
       // scanf("%d", &m);
        for(i = 0; i < m; i++)
                scanf("%s", words[i]);
        int t;
        scanf("%d", &t);
        while(t--)
        {
                flag = 0;
                gets(str);
                autopsy(str, m);
        }
        return 0;
}
