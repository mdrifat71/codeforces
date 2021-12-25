#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    string arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        bool v = true;
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] != arr[i][0])
            {
                v = false;
                break;
            }
        }
        if (i != n-1 && arr[i][0] == arr[i+1][0] )
        {
            cout << "NO" <<endl;
            return 0;
        }

        if (v == false)
        {
            cout << "NO" <<endl;
            return 0;
        }
    }
    cout << "YES" <<endl;

}
