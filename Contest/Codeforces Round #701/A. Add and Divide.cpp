#include <bits/stdc++.h>

using namespace std;

int divide (int a, int b)
{
    int count = 0;
    while (a != 0)
    {
        if (b != 1)
            a = a/ b;
        else
            b++;
        count++;
    }
    return count;
}

void solve()
{
    int a, b; cin >> a >> b;

    int tmpb = b, tmpa = a;
    int c1 = 0, c2 = 0;
    while (tmpb < sqrt(tmpa))
    {
        tmpb++;
        tmpa = tmpa / tmpb;
        c2 +=2;
    }
    c1 = divide(a, b);
    c2 += divide (tmpa, tmpb);
    cout << c1  << " " << c2 << endl;
    cout << min(c1, c2) << endl;;






}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
}
