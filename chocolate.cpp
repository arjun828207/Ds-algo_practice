//https://practice.geeksforgeeks.org/problems/ishaan-loves-chocolates/0
//ISHAN LOVES CHOCOLATE
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    int tmp;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int min=arr[0];
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]<min)
	            min=arr[i];
	    }
	    cout<<min<<endl;
	}
}
