#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int total;
        int m, n; cin >> m >> n;

        if (m * n <= 2)
        {
            total =  1;
        }
        else if (m % 2 == 0)
        {
            total =  (m/2) * n;
        }
        else
        {

            total =  ((m/2)*n)+ ceil(n/2.0) ;
        }

        cout << total << endl;
    }
}
