#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int arr[n];
        int total = 0;
        int ap = 0, am = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            total += arr[i];
            if (arr[i] > 0)
                ap += arr[i];
            else
                am += abs(arr[i]);
        }

        if (total == 0)
            cout << "NO" <<endl;
        else
        {
            if (ap > am)
                sort(arr, arr + n,greater<int>());
            else
                sort(arr, arr + n);

            cout << "YES" <<endl;
            for (int i = 0; i < n; i++) cout << arr[i] << " ";
            cout << endl;
        }

    }
}
