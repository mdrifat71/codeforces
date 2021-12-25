#include <bits/stdc++.h>
using namespace std;


int M = 1e6 + 10;
vector <bool> prime(M, true);
void solve()
{

    int n,e; cin >> n >> e;
    vector <int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    vector <int> L(n),R(n);
    for (int k = 0; k < e; k++)
    {
        int i = k;
        int cc = 0;
        while (i < n)
        {
            if (a[i] != 1)
            {
                L[i] = cc;
                cc = 0;
            }
            else
                cc++;
            i += e;
        }
        cc = 0;
        i -= e;
        while (i >= 0)
        {
            if (a[i] != 1)
            {
                R[i] = cc;
                cc = 0;
            }
            else
                cc++;
            i -= e;
        }
    }

    long long cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (prime[a[i]])
            cnt += 1LL * L[i] * (R[i]+1) + R[i];
    }
    cout << cnt << endl;
}
int main()
{

    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i < M; i++)
    {
       if (prime[i])
         for (int j = i+i; j < M; j += i)
            prime[j] = false;
    }

    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}
