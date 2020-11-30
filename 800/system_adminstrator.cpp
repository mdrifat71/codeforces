#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n; cin >> n;
    int af = 0, bf = 0, as = 0, bs = 0;

    while (n--)
    {
        int c, s, f; cin >> c >> s >>f;
        if (c == 1)
        {
            as += s;
            af += f;
        }
        else
        {
            bs += s;
            bf += f;
        }
    }

    if (as >= af)
        cout << "LIVE" <<endl;
    else
        cout << "DEAD" <<endl;

    if (bs >= bf)
        cout << "LIVE" <<endl;
    else
        cout << "DEAD" <<endl;

    return 0;

}
