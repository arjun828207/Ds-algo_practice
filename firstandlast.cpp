// C++ program to find last occurances of
#include <bits/stdc++.h>
using namespace std;
int last(int arr[], int x, int n)
{
	int low = 0, high = n - 1, res = -1;
	while (low <= high) {
		// Normal Binary Search Logic
		int mid = (low + high) / 2;
		if (arr[mid] > x)
			high = mid - 1;
		else if (arr[mid] < x)
			low = mid + 1;
		else {
			res = mid;
			low = mid + 1; //If arr[mid] is same as x, we update res and move to the right side.
		}
	}
	return res;
}

int main()
{
	int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
	int n = sizeof(arr) / sizeof(int);
    int x = 8;
	cout<<"last occurred is :";
	cout<<last(arr, x, n);
}


