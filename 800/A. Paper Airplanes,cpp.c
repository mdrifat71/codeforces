#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, n, s, p; cin >> k >> n >> s >> p;

    int sr = ceil(n/(float)s);
    int ts = sr * k;
    int tr = ceil(ts/(float)p);
    cout << tr << endl;

}
