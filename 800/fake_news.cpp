#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    string h = "heidi";
    int l = 0;

    for (char c : s)
    {
        if (c == h[l])
            l++;
        if (l == 5)
            break;
    }


    if (l == 5)
        cout << "YES" <<endl;
    else
        cout << "NO" <<endl;
}
