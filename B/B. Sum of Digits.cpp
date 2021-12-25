#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    int count = 0;
    int x;

    while (s.length()  >= 2)
    {
        x = 0;
        for (int i = 0; i < s.length();i++)
        {
            x += (s[i] - '0');
        }
        s = to_string(x);
        count++;
    }
    cout << count << endl;
}
