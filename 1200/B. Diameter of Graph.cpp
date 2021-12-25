#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        ll n; cin >> n;
        int m, k; cin >> m >> k;
        ll me =  (n * (n-1))/ 2;
        int d;

         if (me < m || m < n - 1)
        {
            cout << "NO"<< endl;
            continue;
        }

        if (me == 0)
            d = 0;
        else if ( me == m)
            d = 1;
        else if (m >= n - 1)
            d = 2;


        if (d < k - 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
}
