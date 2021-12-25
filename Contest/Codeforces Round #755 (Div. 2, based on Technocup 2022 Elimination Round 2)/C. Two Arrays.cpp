#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{
    int n; cin >> n;
    int a[101], b[101];



    for (int i = 0; i < n; i++)
        cin >> a[i];

    for(int i= 0; i < n; i++)
        cin >> b[i];

    sort (a, a + n);
    sort (b, b + n);

    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            if (a[i] + 1 != b[i])
            {
                cout << "NO" << endl;
                return;
            }
        }
    }

    cout << "YES" << endl;


}
int main()
{
    int t; cin >> t;
    while (t--)
        solve();
}
