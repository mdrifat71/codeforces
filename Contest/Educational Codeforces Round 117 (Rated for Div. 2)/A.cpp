
#include <bits/stdc++.h>

using namespace std;

#define ll long long


void solve()
{
    int x, y;
        scanf("%d%d", &x, &y);
        int d = (x + y);
        if ( d % 2 != 0)
        {
            cout << -1 << " " << -1 << endl;
            return;
        }
        d = d/2;

        for (int i = d, j = 0; i >= 0; i--, j++)
        {
            if (abs(x - i) + abs(y - j) == d)
            {
                cout << i << " " << j << endl;
                return;
            }

        }
        cout << -1 << " " << -1 << endl;
}
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        solve();

    }
}
