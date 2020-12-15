
#include <iostream>
using namespace std;
void chess()
{
	    int m;
	    cin>>m;
	    for(int i=1;i<=m;i++)
	    {
	        if(i==1)
	        cout<<"O";
	        else cout<<".";
	        if(i%8==0)
	        cout<<endl;
	    }
	    for(int i=m+1;i<=64;i++)
	    {
	        cout<<"X";
	        if(i%8==0)
	        cout<<endl;
	    }

}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    chess();
	    cout<<endl;
	}
	return 0;
}
