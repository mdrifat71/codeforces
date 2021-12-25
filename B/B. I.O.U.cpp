#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int t[101],g[101];
    fill(t, t+101, 0);
    fill(g, g+101, 0);
    for (int i = 0; i < m; i++)
    {
        int a, b, c; cin >> a >> b >> c;
        t[a] += c;
        g[b] += c;
    }

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int diff = g[i] - t[i];
        diff = diff < 0 ? 0 : diff;
        sum += diff;
    }
    cout << sum << endl;
}
