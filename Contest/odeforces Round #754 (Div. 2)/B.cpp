#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >>n;
        string s; cin >> s;
        int l = 0; int r = s.size() - 1;
        int ct = 0;
        vector <int> la, ra;
        while (l < r)
        {
            if (s[l] != '1')
                l++;
            if (s[r] != '0')
                r--;
            if (s[l] == '1' && s[r] == '0')
            {
                ct = 1;
                la.push_back(l+1);
                ra.push_back(r+1);
                l++;
                r--;
            }

        }

        if (ct == 0)
            cout << 0 <<endl;
        else
        {
            for (int i = 0; i < la.size(); i++)
                cout << la[i] << " ";
            for (int i = 0; i < ra.size(); i++)
                cout << ra[i] << " ";
            cout << endl;
        }
    }
}
