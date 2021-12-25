#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    int n, m;
    scanf("%d%d", &n, &m);
    if (n == 1 || m == 1)
    {
        if (n == m)
            cout << 0 << endl;
        else
            cout << 1 << endl;
        return;
    }

    cout << 2 << endl;

}
int main()
{
    int t; scanf("%d", &t);
    while(t--)
    {
        solve();
    }

}

