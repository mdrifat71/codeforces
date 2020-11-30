#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cin >> arr[i][j];

    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i][i];
    for (int i = 0, j = n - 1; i < n ; i++, j--)
        sum+= arr[i][j];

    for (int i = 0; i < n; i++)
    {
        sum += arr[n/2][i];
        sum += arr[i][n/2];
    }

    cout << sum - arr[n/2][n/2] * 3 << endl;
}
