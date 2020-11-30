#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][3];
    int crd[3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> arr[i][j];
    }

    for (int j = 0; j < 3; j++)
    {
        crd[j] = 0;
        for (int i = 0; i < n; i++)
        {
            crd[j] += arr[i][j];
        }
    }

    if (crd[0] == 0 && crd[1] == 0 && crd[2] == 0)
        cout << "YES" <<endl;
    else
        cout << "NO" <<endl;
}
