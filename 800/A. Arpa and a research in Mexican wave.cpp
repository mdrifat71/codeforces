#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, t; cin >> n >> k >> t;
    int T;
    if (k < t)
    {
        if (n < t)
            T = k - (t - n);
        else
            T = k;
    }
    else
        T = t;

    cout << T <<endl;
}
