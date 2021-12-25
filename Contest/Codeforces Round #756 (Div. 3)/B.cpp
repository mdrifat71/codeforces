#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    int a, b;
    scanf("%d%d", &a, &b);

    int d = abs(a - b);
    int p = min(d/2, min(a,b));
    p += (min(a,b) - p)/2;
    cout << p << endl;
}
int main()
{
    int t; scanf("%d", &t);
    while(t--)
    {
        solve();
    }
}

