
int maxEvenOdd(int a[], int n)
{
   //Your code here
   int r=1,cur=1;
   for(int i=1;i<n;i++)
   {
       if((a[i]%2==0 && a[i-1]%2!=0)||(a[i]%2!=0 && a[i-1]%2==0) )
       {
            cur++;
            if(cur>r)
            r=cur;

       }
       else
       cur=1;
     }
     return r;
} //10 12 9 16 15 10 10 8 5
// 9 9 9 9
