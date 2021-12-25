#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {

        int n; cin >> n;
        int * arr = new int[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int bit[30];
        for (int i = 0; i < 30; i++)
            bit[i] = 0;

        for (int i = 0; i < n; i++)
        {
            int c = arr[i];
            int j = 29;
            while (c != 0)
            {
                if (c % 2 == 1)
                    bit[j]++;
                c = c / 2;
                j--;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            bool d = true;
            for (int j = 0; j < 30; j++)
            {
                if (bit[j] % i != 0)
                {
                    d = false;
                    break;
                }
            }
            if (d)
                cout << i << " ";

        }
        cout << endl;
    }
}
