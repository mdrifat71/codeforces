#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        string m = "2020";

        int k = 0;
        int x = n - 1;
        int y = 3;
        for (int i = 0; i < 4; i++)
        {
            if (s[x] == m[y])
                k++;
            else
                break;
            x--;
            y--;
        }


        int p = 4 - k;
        for (int i = 0; i < p; i++)
        {

            if (s[i] == m[i])
                k++;
            else
                break;
        }

        if (k == 4)
            cout << "YES" << endl;
        else
            cout << "NO" <<endl;
    }
}
