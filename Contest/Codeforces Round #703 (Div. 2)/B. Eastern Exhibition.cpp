
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{
    int n; cin >> n;
    vector <ll> x(n);
    vector <ll> y(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    if (n % 2 != 0)
    {
        cout << 1 << endl;
    }
    else
    {
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        ll ans = (x[n/2] - x[n/2-1] + 1) * (y[n/2] - y[n/2-1] + 1);
        cout << ans << endl;
    }
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}
