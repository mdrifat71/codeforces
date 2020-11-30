#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m, r, c; cin >> n >> m >> r >> c;
        int x = max(r - 1, n - r);
        int y = max(c - 1, m - c);
        cout << x + y <<endl;
    }
}
