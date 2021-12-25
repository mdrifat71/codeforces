#
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long x, n; cin >> x >> n;
    long long even, odd;

    if (x % 2 == 0)
    {
        if ( (n /2) % 2 == 0 )
            cout << x - (n * (n % 2)) << endl;
        else
            cout << x + 1 + n * (n % 2) << endl;
    }
    else
    {
        if ( (n /2) % 2 == 0)
        {
            cout << x + (n * (n % 2)) << endl;
        }
        else
            cout << x - 1 - (n * (n % 2)) << endl;
    }

}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
