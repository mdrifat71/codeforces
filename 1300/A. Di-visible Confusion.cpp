#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int * arr = new int[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int f = 2;


        bool st;
        for (int i = 0; i < n; i++)
        {
            st = false;
            for (int j = 2; j <= i+2; j++)
            {
                if (arr[i] % j != 0)
                {
                    st = true;
                    break;
                }
            }

            if (!st)
            {
                cout << "NO" << endl;
                break;
            }
        }
        if (st)
            cout << "YES" << endl;
    }
}
