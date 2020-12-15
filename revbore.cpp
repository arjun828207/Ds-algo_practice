// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 

// Function to return the reverse of a number 
int reverse(int n) 
{ 
	int rev = 0; 
	while (n != 0) { 
		rev = (rev * 10) + (n % 10); 
		n /= 10; 
	} 
	return rev; 
} 

// Function to find the sum of the odd 
// and even positioned digits in a number 
void getSum(int n) 
{ 
	n = reverse(n); 
    bool sumOdd = true, sumEven = true; int c = 1; 
    bool mainflag=false;

	while (n != 0) { 

		// If c is even number then it means 
		// digit extracted is at even place 
        if(c%2!=0)
        {
            if((n%10)%2!=0)
            {
                sumOdd=true;
                cout<<n%10<<"Odd";
            }
            else
            {   
                sumOdd=false;
                break;
            }
        }
        else
        {
            if((n%10)%2==0)
            {
                sumEven=true;
                cout<<n%10<<"E";
            }
            else
            {
                sumEven=false;
                break;
            }     
        }
		n /= 10; 
		c++; 
        if(sumEven==true&&sumOdd==true)
        mainflag=true;
        else
        {
            mainflag=false;
            break;
        }
        
	} 
    if(mainflag==true)
    cnt++;
cout<<cnt;
} 

// Driver code 
int main() 
{ 
	int n = 122; 
	getSum(n); 
	return 0; 
} 
