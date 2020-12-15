/*Given	an	array	with	all	distinct	elements,	find	the	largest	three
elements.	Expected	time	complexity	is	O(n)	and	extra	space	is	O(1).
Input: arr[] = {10, 4, 3, 50, 23, 90}
Output: 90, 50, 23*/
// C++ code to find largest
// three elements in an array
#include<bits/stdc++.h>
using namespace std;
void find3largest(int arr[], int n)
{
	sort(arr, arr + n); //It uses Tuned Quicksort with
					//avg. case Time complexity = O(nLogn)
	int check = 0, count = 1;
	for(int i = 1; i <= n; i++)
	{
		if(count<4)
		{
			if(check != arr[n - i])
			{
				// to handle duplicate values
				cout << arr[n - i] << " ";
				check = arr[n - i];
				count++;
			}
		}
		else
			break;
	}
}
// Driver code
int main()
{
	int arr[] = {12, 45, 1, -1, 45, 54, 23, 5, 0, -10};
	int n = sizeof(arr)/sizeof(arr[0]);
	find3largest(arr, n);
}

