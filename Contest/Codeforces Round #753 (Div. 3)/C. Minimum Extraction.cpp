#include <bits/stdc++.h>

using namespace std;


void solve()
{
    int n; cin >> n;
    int * arr = new int[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr+n);
    if (n == 1)
    {
        cout << arr[0] << endl;
        return;
    }

    int p = arr[0];
    int m = arr[0];
    for (int i = 0; i < n - 1; i++)
    {

       // m = max (p , (arr[i] - p)); previous one
        m = max (m , (arr[i] - p));  //this fucking line
        p += arr[i] - p;
    }
    cout << max( (arr[n-1] - p), m) << endl;
}
int main()
{
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
}
