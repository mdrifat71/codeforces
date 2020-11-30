#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int p = 0;
    int m = 0;
    int ai, bi;

    for (int i = 0; i < n; i++)
    {
        cin >> ai >> bi;
        p += bi - ai;
        if (p > m)
            m = p;
    }
    cout << m <<endl;
}
