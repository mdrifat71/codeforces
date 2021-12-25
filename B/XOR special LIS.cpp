#include <bits/stdc++.h>

using namespace std;

void solve()
{

    int n; cin >>n;
    int * arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if (n % 2 == 0)
    {
        cout << "YES" << endl;
        return;
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= arr[i-1])
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}
