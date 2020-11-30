#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int k, n, w;
    cin >> k >> n >> w;

    long int nd = 0;

    for (long int i = 1; i <= w; i++)
    {
        nd += i * k;
    }
    /*
    float nd = (float)(w/2.00)*(2 * k + (w-1)*k);

    */
    if (nd - n > 0)
        cout << nd - n <<endl;
    else
        cout << 0 <<endl;
}
