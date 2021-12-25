#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n,k; cin >> n >> k;
    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][1];
        cin >> arr[i][2];
    }
    bool ok = false;

    for (int i = 0; i < n; i++)
    {
        ok = true;

        for (int j = 0; j < n; j++)
        {
            if (i != j &&  k < abs(arr[i][1] - arr[j][1]) + abs(arr[i][2] - arr[j][2]))
            {
                ok = false;
                break;
            }
        }

        if (ok == true)
        {
            cout << 1 << endl;
            return;
        }
    }
    cout << -1 <<endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}
