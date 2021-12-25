#include <bits/stdc++.h>

using namespace std;


void solve()
{
    int a, b; cin>> a >> b;
    string s; cin >> s;

    int z = 0, o = 0, q = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            z++;
        else if (s[i] == '1')
            o++;
        else
            q++;
    }

    z = a-z;
    o = b - o;
    if (q - z != o)
    {
        cout << -1 << endl;
        return;
    }

   // cout << z << " " << o << endl;
    int l = 0, r = s.size() - 1;
    bool cond = true;

    while (l < r)
    {
        if (s[l] == '0' && s[r] == '?')
        {
            s[r] = '0';
            z--;
        }
        else if (s[l] == '1' && s[r] == '?')
        {
            s[r] = '1';
            o--;
        }
        else if (s[r] == '1' && s[l] == '?')
        {
            s[l] = '1';
            o--;
        }
        else if (s[r] == '0' && s[l] == '?')
        {
            s[l] = '0';
            z--;
        }
        else if (s[l] != s[r])
        {
            cout << -1 << endl;
            return;
        }
        l++;
        r--;
    }

    l = 0, r = s.size() - 1;
    while (l <= r)
    {

        if (l == r && s[l] == '?')
        {

            if (z == 1)
            {
                s[l] = '0';
                z--;
            }
            else if (o == 1)
            {
                s[l] = '1';
                o--;
            }
            else
            {
                cond = false;
                break;
            }

        }


        if (s[l] == '?')
        {

            if (z >= 2)
            {
                s[r] = '0';
                s[l] = '0';
                z -= 2;
            }
            else if (o >= 2)
            {
                s[l] = '1';
                s[r] = '1';
                o -= 2;
            }
            else
            {
                cond = false;
                break;
            }


        }
        l++;
        r--;
    }

    //cout << z << " " << o << endl;
    if (z == 0 && o == 0 && cond)
    {
        cout << s << endl;
    }
    else
        cout << -1 << endl;
}
int main()
{
    int t; cin >> t;
    while (t--)
    {

        solve();
    }
}
