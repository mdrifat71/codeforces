#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    string s;
    int g = 1;
    int p = -1;
    while(n--)
    {
        cin >> s;
        if (s[0] == p)
            g++;
        p = s[1];
    }
    cout << g <<endl;
}
