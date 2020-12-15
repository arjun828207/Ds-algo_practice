#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    long long int T;
    cin >> T;
    while (T--)
    {
        ll number;
        cin >> number;
        ll arr1[number];
        for (ll i = 0; i < number; i++)
            cin >> arr1[i];
        ll s = arr1[0], d = 0, sum = arr1[0], varia = 0;
        for (ll i = 1; i < number; i++)
        {
            if (s >= 1)
            {
                s = s + arr1[i] - 1;
                d++;
                sum = sum + arr1[i];
            }
            else
                varia = 1;
        }
        if (varia == 1)
            cout << d << endl;
        else
            cout << sum << endl;
    }

    return 0;
}