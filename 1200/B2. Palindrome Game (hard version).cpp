#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        int zc = 0;
        for (int i = 0; i < s.size(); i++)
            if (s[i] == '0')
                zc++;

        int us = 0;
        int l = 0;
        int r = n-1;
        while (l < r)
        {
            if (s[l] != s[r])
                us++;
            l++;
            r--;
        }

        if (us == 0)
        {
            if (n == 1 && s[0] == '1')
                cout << "DRAW" << endl;
            else if (zc % 2 == 0 || zc == 1)
                cout << "BOB" << endl;
            else
                cout << "ALICE" << endl;
        }
        else
        {
            int dif = zc - us;

            if (dif == 1 &&  us == 1)
            {
                cout << "DRAW" << endl;
            }
            else
                cout << "ALICE" << endl;



        }


    }
}
