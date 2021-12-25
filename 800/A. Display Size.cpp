#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;

    for (int i = sqrt(n); i > 0; i--)
    {
        if (n % i == 0)
        {
            if (n/i > i)
                cout << i << " " << n/i <<endl;
            else
                cout << n/i << " " << i <<endl;

            break;
        }
    }
}
