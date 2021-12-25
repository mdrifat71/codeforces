#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;

    int l = 0;
    int w = 0;
    while (n--)
    {
        int t; cin >> t;
        if (t - l > 15)
        {
            cout << l + 15 <<endl;
            return 0;
        }
        l = t;
        w = l + 15;
    }
    if (90-l > 15)
        cout << w <<endl;
    else
        cout << 90 <<endl;
}
