#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;

    while (t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        int p_count = 0;

        for (int i = n-1; i >=0; i--)
        {
            if (s[i] != ')')
                break;
            p_count++;
        }

        if (n-p_count < p_count)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
