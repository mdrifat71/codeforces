#include <bits/stdc++.h>

using namespace std;
int arr[10][10];

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            cin >> arr[i][j];

        int sum = 0;
        int mc = 0;
        int min = abs(arr[0][0]);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                sum += abs(arr[i][j]);
                if (arr[i][j] < 0)
                    mc++;

                if (min > abs(arr[i][j]))
                    min = abs(arr[i][j]);
            }
        }

       // cout << sum << " ==  " << min <<endl;
        if (mc % 2 == 0)
            cout << sum << endl;
        else
            cout << sum - (min*2) <<endl;

    }
}
