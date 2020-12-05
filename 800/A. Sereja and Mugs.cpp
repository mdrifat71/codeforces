#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,s; cin >> n >> s;
    int b = 0;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        int tmp; cin >> tmp;

        if (tmp > b)
            b = tmp;
        total += tmp;
    }

    if (total - b <= s )
        cout << "YES" <<endl;
    else
        cout << "NO" <<endl;
}
