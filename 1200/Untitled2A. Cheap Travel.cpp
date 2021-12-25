#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    if (a * m <= b)
        cout << n * a << endl;
    else
    {
        if (((n % m ) * a) > b)
            cout << (n/m) * b + b << endl;
        else
            cout << (n/m) * b + (n % m) * a << endl;
    }
}
