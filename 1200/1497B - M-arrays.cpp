#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        //int * arr = new int[n];
        int * mem = new int [m];

        fill(mem, mem + m, 0);
        for (int i = 0; i < n; i++)
        {
            int a; cin >> a;
            mem[a % m]++;
        }

        int ct = 0;
        if (mem[0] != 0)
            ct++;
        for (int i = 1; i < m; i++)
        {
            if (mem[i] != 0)
            {
                ct += 1 + max(0, abs(mem[i] - mem[m-i]) - 1);
                mem[m-i] = 0;
            }

        }
        cout << ct << endl;
    }
}
