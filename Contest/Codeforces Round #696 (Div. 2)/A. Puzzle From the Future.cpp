#include <bits/stdc++.h>

using namespace std;


void solve ()
{
    int n; cin >> n;
    string b; cin >> b;

    string a= "";
    int prev = 0;
    for (char c : b)
    {
        if (c == '0')
        {
            if (prev == 1)
            {
                a += '0';
                prev = 0;
            }
            else
            {
                a+= '1';
                prev = 1;
            }
        }
        else
        {
            if (prev == 2)
            {
                a += '0';
                prev = 1;
            }
            else
            {
                prev = 2;
                a+='1';
            }
        }
    }
    cout << a << endl;
}
int main()
{
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
}
