#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, m, k; cin >> n >> m >> k;
    char c;
    int d;
    int l = ceil(k / (float)(m * 2));
    if (k % (m*2)== 0)
    {
        c = 'R';
        d = m;
    }
    else
    {
        int rem = k % (m * 2);
        d = ceil (rem / 2.0);
        if (rem % 2 == 0)
            c = 'R';
        else
            c = 'L';
    }

    cout << l << " " << d << " " << c <<endl;
}
