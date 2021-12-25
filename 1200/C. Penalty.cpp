#include <bits/stdc++.h>

using namespace std;

bool condition(int tx, int txc, int ty, int p)
{
    if (tx + txc > ty + p)
        return true;
    return false;
}
void solve()
{
    string s; cin >>s;
        int ta = 0, tb = 0, tac = 0, tbc = 0;
        for (int i = 1; i <= 4; i++)
        {
            if (i & 1 != 0)
            {
                if (s[i-1] == '1')
                    ta++;
                else if(s[i-1] == '?')
                    tac++;
            }
            else
            {
                if (s[i-1] == '1')
                    tb++;
                else if(s[i-1] == '?')
                    tbc++;
            }

        }



        int n = s.size() ;
        for (int i = 5; i <= n; i++)
        {
            if (i & 1 != 0)
            {
                if (s[i-1] == '1')
                    ta++;
                else if (s[i-1] == '?')
                    tac++;

                if (condition(ta, tac, tb, (n-i)/2 + 1) || condition(tb, tbc, ta, (n-i)/2))
                {
                    cout << i << endl;
                    return;
                }


            }
            else
            {
                if (s[i-1] == '1')
                    tb++;
                else if(s[i-1] == '?')
                    tbc++;

                if (condition(ta, tac, tb, (n-i)/2) || condition(tb, tbc, ta, (n-i)/2))
                {
                    cout << i << endl;
                    return;
                }

            }
        }

        cout << 10 << endl;
}
int main()
{
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
}
