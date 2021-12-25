#include <bits/stdc++.h>
#define ll long long


using namespace std;



int main()
{

    int t;
    scanf("%d", &t);
    while(t--)
    {
        ll h, p;
        cin >> h >> p;
        ll k = 64 - __builtin_clzll(p);



        ll n = (1 << h) - 1;

        ll total_k = (1 << k ) - 1;

        if (total_k >= n)
        {
            cout << h << endl;
            continue;
        }
        ll rm_task = n - total_k;
        ll ct = k + rm_task / p ;
        if (rm_task % p != 0)
            ct++;

        scanf("%lld\n", ct);
    }
}
