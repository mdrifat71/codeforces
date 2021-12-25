#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string m; cin >> m;
    int arr[123];
    for (int i = 1; i < 27; i++)
        arr[m[i - 1]] = i;
    string s; cin >> s;
    int x = 0;
    for (int i = 1; i < s.size(); i++)
        x += abs(arr[s[i]] - arr[s[i-1]]);
    cout << x << endl;

}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
