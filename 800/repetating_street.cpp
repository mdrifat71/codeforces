#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k; cin >> n >> k;
    int arr[n];
    int mem[101];
    for (int i = 0; i  < n; i++)
    {
        cin >> arr[i];
        mem[arr[i]] = 1;
    }

    int min_ = -1;

    for (int i = 1; i <= 100; i++)
    {
        int day = 0;
        int c = 0;
        if (mem[i] == 1 )
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[j] != i)
                {
                    day++;
                    j += k - 1;
                }
            }

            if (min_ == -1)
                min_ = day;
            else if (min_ > day)
                min_ = day;
        }

    }

    cout << min_ <<endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}
