
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{
    int a, b; cin >> a >> b;
    int count = 0;
    while (a != 0)
    {
        if (b == 1 || b == a)
        {
            b = b+1;
        }
        else
        {
            a = a / b;

        }
       // cout << a << " " << b;
        count ++;
    }

    cout << count << endl;
}
int main()
{
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
}
