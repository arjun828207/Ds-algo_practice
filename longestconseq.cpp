#include<bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
    int arr[7]={102,4,100,1,101,3,2};
    set<int> h;
    for(int x:arr)
    h.insert(x);
    int longeststreak=0;
    for(int num:arr)
    {
        if(!h.count(num-1))
        {
            int currentnum=num;
            int currentstreak=1;
            while (h.count(currentnum+1))
            {
                currentstreak+=1;
                currentnum+=1;
            }
            longeststreak=max(currentstreak,longeststreak);
        }
    }
    cout<<"the length of the longest streak is:"<<longeststreak<<endl;
}