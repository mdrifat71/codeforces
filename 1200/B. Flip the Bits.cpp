#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n; cin >> n;
    string a, b;
    cin >> a >> b;
    int * arr = new int[n];
    int ac = 0, bc = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '0')
        {
            ac++;
        }
        else
        {
            bc++;
        }

        if (ac == bc)
            arr[i] = 1;
        else
            arr[i] = -1;
    }


    int flip = 0;
    for (int i = n-1; i >= 0; i--)
    {
        if (flip % 2 == 1)
            a[i] = (a[i] == '0') ? '1' : '0';

        if (a[i] != b[i])
        {
            if (arr[i] != 1)
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                flip++;
            }
        }

    }

    cout << "YES" << endl;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}
