#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b; cin >> n >> a >> b;
    int c[n];
    for (int i = 0; i < n; i++) cin >> c[i];
    sort(c, c+n);

    if (c[b-1] != c[b])
        cout << c[b] - c[b-1] << "\n";
    else
        cout << 0 << "\n";


}
