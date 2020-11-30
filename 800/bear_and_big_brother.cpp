#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    int n = 0;
    cin >> a >> b;

    while (a <= b)
    {
        if (a <= b)
        {
            a *= 3;
            b *= 2;
            n++;
        }
    }
    cout << n <<endl;
}
