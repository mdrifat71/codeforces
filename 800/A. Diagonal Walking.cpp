#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    int g = 0;
    int  p = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[p])
        {
            g++;
        }
        else
        {
            p = i + 1;
        }
    }
    cout << g << endl;
}
