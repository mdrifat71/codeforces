#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int * arr = new int [n+1];
        int * memn = new int[n];
        int * memp = new int[n];

        fill(memp, memp+n, 0);
        fill(memn, memn+n, 0);

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            if (arr[i] < i)
                memn[i - arr[i]]++;
            else
                memp[arr[i] - i]++;
        }

        long long ct = 0;
        for (int i = 0; i < n; i++)
        {
            ct += ((memp[i] - 1) * (long long)memp[i])/2;
            ct += ((memn[i] - 1) * (long long)memn[i])/2;
        }

        cout << ct << endl;
    }
}
