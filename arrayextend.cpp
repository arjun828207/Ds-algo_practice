#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int t,x,y,diff,max=0,temp,score1=0,score2=0,winner;
	cin>>n;
	while(n--)
	{
	    cin>>x>>y;
	    score1=score1+x;
	    score2=score2+y;
	    if(score1>score2)
	    {
	        diff=score1-score2;
	        temp=1;
	    }
	    else
	    {
	        diff=score2-score1;
	        temp=2;
	    }
	    if(differ>max)
	    {
	        max=differ;
	        winner=temp;
	    }
	}
	cout <<winner<<" "<< max;
}
//    long long int res_array;
//    long long  int a1[n],a2[n];
//    long long  int resarray[n];
//     long long int max=INT_MIN;
//     for(int i=0;i<n;i++)
//     cin>>a1[i]>>a2[i];
//     for(int i=0;i<n;i++)
//     {
//         resarray[i]=abs(a1[i]-a2[i]);
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(resarray[i]>max)
//         max=resarray[i];
//     }
//     //cout<<max;
//      for(int i=0;i<n;i++)
//     {
//         resarray[i]=abs(a1[i]-a2[i]);
//         if(resarray[i]==max)
//         {
//             if(a1[i]>a2[i])
//             {
//                 res_array=1;
//                 break;
//             }
//             else
//             {
//                 res_array=2;
//                 break;
//             }
            
//         }
       
//     }
//      cout<<res_array<<" "<<max;
