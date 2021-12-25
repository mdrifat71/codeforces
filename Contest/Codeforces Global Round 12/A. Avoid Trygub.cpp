#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >>n;
    string s;
    cin >> s;
    int i = 0, j = n - 1;

    while (i < j)
    {

        if (s[i] == 't')
        {
            swap(s[i], s[j]);
            j--;
            continue;
        }
        i++;
    }
    cout << s <<endl;


}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
}
