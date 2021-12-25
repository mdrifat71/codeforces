#include <bits/stdc++.h>
#define ll long long

using namespace std;


bool hasEven(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        int d = s[i] - 48;
        if (d % 2== 0)
            return true;
    }
    return false;
}
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int ld = s[n-1] - 48;
    int fd = s[0] - 48;

    if (ld % 2 == 0)
        cout << 0 << endl;
    else if (fd % 2 == 0)
        cout << 1 << endl;
    else if (hasEven(s))
        cout << 2 << endl;
    else
        cout << -1 << endl;

}
int main()
{

    int t; scanf("%d", &t);
    while(t--)
    {
        solve();
    }
}
