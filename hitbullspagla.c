#include<stdio.h>


int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    arr[8]=65;
    printf("%d\n",arr[8]); 
}
