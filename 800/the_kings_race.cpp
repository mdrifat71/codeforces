#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, x, y; cin >> n >> x >>y;

    if ( (x - 1 + y - 1) > (n - x + n - y))
        cout << "Black" <<endl;
    else
        cout << "White" <<endl;
    return 0;
}
