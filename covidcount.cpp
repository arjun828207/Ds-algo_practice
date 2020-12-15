/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        cin>>k;
        int min=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int tmp;
        cin>>tmp;
        if(min>tmp)
        min=tmp;
        }
        cout<<k-min;


        }
    }

