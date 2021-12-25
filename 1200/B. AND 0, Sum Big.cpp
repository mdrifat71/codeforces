#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{


    int t; cin >> t;
    while(t--)
    {

        ll n, k; cin >> n >> k;

        ll rem = 1;
        ll y = 1000000000 + 7;
        for (int i = 1; i <= k; i++)
        {
            rem = (rem * n) % y;
        }
        cout << rem % y << endl;

    }
}
