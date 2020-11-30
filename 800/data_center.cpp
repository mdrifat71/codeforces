#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;

    int sq = (int)sqrt(n);

    for (int i = sq; i >0; i++)
    {
        if (n % i == 0)
        {
            cout << 2 *(i + n / i) <<endl;
            break;
        }
    }
}
