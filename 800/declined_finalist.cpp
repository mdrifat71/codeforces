#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k; cin >> k;
    int max_ = 0;
    while (k--)
    {
        int tmp; cin >>tmp;
        if (tmp > max_)
            max_ = tmp;
    }

    if (max_ - 25 > 0)
        cout << max_ - 25 <<endl;
    else
        cout << 0 <<endl;
}
