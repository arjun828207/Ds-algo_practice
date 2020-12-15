#include<iostream>
using namespace std;
int knapsack(int Wt[],int value[],int n,int W)
{
    if(n==0||W==1)
    return 0;
    if (Wt[n-1]>W)
    {
        return knapsack(Wt,value,n-1,W);//not considering a box
    }
   return max(knapsack(Wt,value,n-1,W-Wt[n-1])+value[n-1],knapsack(Wt,value,n-1,W));//once we are considering and once not
}
int main()
{
    int Wt[]={10,20,30};
    int value[]={100,50,150};
    int W=50;
    cout<<knapsack(Wt,value,3,W);
}