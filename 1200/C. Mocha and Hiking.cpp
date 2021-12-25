#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n; cin >> n;
    int * arr = new int [n+1];
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    if (arr[1] == 1)
    {
        cout << n+1 << " ";
        for (int j =  1; j <= n; j++ )
            cout << j << " ";
        cout << endl;
        return;
    }

    if (arr[n] == 0)
    {
        for (int j = 1; j <= n + 1; j++)
            cout << j << " ";
        cout << endl;
        return;
    }

    int lp = 0;
    int l = -1, r = -1;
    for (int i = 2; i <= n; i++)
    {

        if (arr[i] == 1 && arr[i-1] == 0)
        {
            l = i - 1;
            r = i;
            break;
        }
    }

    if (l != -1)
    {
        for (int j = 1; j <= l; j++)
            cout << j << " ";
        cout << n + 1 << " ";

        for (int i = l + 1; i <= n; i++)
            cout << i << " ";
        cout <<endl;
    }
    else
    {
        cout << -1 << endl;
    }
}
int main()
{
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
}
