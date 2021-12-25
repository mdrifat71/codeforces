#include <bits/stdc++.h>

#define ll long long
using namespace std;

ll  mod_exp(ll a, ll b, ll c)
{
    if (b == 0)
        return 1;
    int x = mod_exp(a, b/2, c);

    if (b % 2 == 0)
    {
        return (x * x) % c;
    }

    return ((x * x) * (a % c)) % c;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll a, b, c; cin >> a >> b >> c;
        cout << mod_exp(a, b, c) << endl;;

    }
    int z; cin >> z;
}
