#include <bits/stdc++.h>

using namespace std;

long long int prime(long long int x)
{

    while (true)
    {
        int n = sqrt(x);
        bool found = true;
        for (int i = 2; i <= n; i++)
        {
            if (x % i == 0)
            {
                found = false;
                break;
            }
        }
        if (found)
        {
            return x;
        }
        x++;
    }
}
int main()
{
    int t; cin >> t;
    while (t--)
    {
        long long int d; cin>> d;
        long long int a1 = prime(1+d);
        long long   int a2 = prime(a1+d);
        long long int a = a1 * a2;
        cout << a << endl;

    }
}
