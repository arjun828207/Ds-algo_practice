#include<bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
    int arr[7]={102,4,100,1,101,3,2};
    set<int> h;
    for(int x:arr)
    h.insert(x);//inserting all the elements in the set
    int longeststreak=0;
    for(int num:arr)
    {
        if(!h.count(num-1))//if the number lower than num does not exist
        {
            int currentnum=num;
            int currentstreak=1;
            while (h.count(currentnum+1))//we will loop for the next increasing number
            { 
                currentstreak+=1;
                currentnum+=1;
            }
            longeststreak=max(currentstreak,longeststreak);//we will take the longest streak
        }
    }
    cout<<"the length of the longest streak is:"<<longeststreak<<endl;
}