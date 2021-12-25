#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, h; cin >> n >> h;
    int w = 0;
    for (int i = 0; i < n; i++)
    {
        int tmp; cin >> tmp;
        if (tmp > h)
            w += 2;
        else
            w++;
    }
    cout << w << endl;
}
