

/*#include <iostream>

using namespace std;

void queries(string s, int n)
{
    int l, r;
    cin >> l >> r;
    bool frag = false;

    if ((r - l) < 1)
    {
        cout << "NO" <<endl;
        return;
    }

    int tmpl = l;
    for (int i = 0; i < n - (l - r); i++)
    {
        for (int j = i; j < n; j++)
        {
            if (l <= r)
            {
                if (s[j] == s[l-1])
                {
                    l++;
                }
                else
                {
                    frag = true;
                }
            }
            else
                break;
        }
        l--;
        if (frag == true && l == r)
        {
            cout << "YES" <<endl;
            return ;
        }
        else if (frag == false && l == r)
        {
            for (int i = r; i < n; i++)
            {
                if (s[i] == s[r-1])
                {
                    cout << "YES" <<endl;
                    return;
                }
            }
        }

        l = tmpl;
        frag = false;

    }
    cout << "NO" <<endl;
}

void sub()
{
    int n, q;
    string s;
    cin >> n >> q;
    cin>> s;

    for (int i = 0; i < q; i++)
    {
        queries(s, n);
    }
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        sub();
    }
}
*/

#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int i, n, Q; string s;
        cin >> n >> Q >> s;
        while(Q--) {
            int l, r; cin >> l >> r; --l; --r;
            bool bad = true;
            for(i = 0; i < l and bad; i++)
                if(s[i] == s[l]) bad = false;
            for(i = r+1; i < n and bad; i++)
                if(s[i] == s[r]) bad = false;
            cout << (bad? "NO" : "YES") << '\n';
        }
    }
    return 0;
}

