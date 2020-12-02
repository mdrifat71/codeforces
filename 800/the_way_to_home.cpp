#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, d; cin >> n >> d;
    string s; cin >> s;

    int start = 0, end = 0, jump = 0;

    while (end != n - 1)
    {
        for (int i = start + d; i > start; i--)
            if (s[i] == '1')
            {
                end = i;
                break;
            }

        if (start == end)
            break;
        else
        {
            start = end;
            jump++;
        }
    }

    if (end == n - 1)
        cout << jump <<endl;
    else
        cout << - 1 <<endl;
}
