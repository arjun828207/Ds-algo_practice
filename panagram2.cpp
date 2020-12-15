#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int count[26]={0};
    string s;
    char flag;
    getline(cin,s);//arjun 5 4
    for(int i=0;i<s.length();i++)
    {
        if(int(s[i])>=97 && int(s[i])<=122)
        {
            count[s[i]-'a']++;
        }
        else if(int(s[i])>=65 && int(s[i])<=90)
        {//65-65=0
        	count[s[i]-'A']++;
		}
		else if(int(s[i])==' ')
		{
			count[26]++;
		}

    }
    for(int i=0;i<=26;i++)
    {
    	if(count[i]>0)
        flag='Y';
    	
		else 
		{
			flag='N';
            break;
		}
	}
    cout<<flag;
}