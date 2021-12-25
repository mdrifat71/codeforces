#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{
    ll n, m; cin >> n >> m;

    ll a = (n * m);
    if (a % 3 != 0)
        cout << a / 3 + 1 << endl;
    else
        cout << a / 3 << endl;

}
int main()
{
    int t; cin >> t;
    while (t--)
        solve();
}

