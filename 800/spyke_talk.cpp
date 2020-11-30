#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int arr[n];
    for (int i = 0 ; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    int pair_ = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0) continue;
        if (arr[i] == arr[i+1])
        {
            if (i + 2 < n && arr[i] == arr[i+2])
            {
                cout << -1 <<endl;
                return 0;
            }
            i++;
            pair_++;
        }

    }
    cout << pair_ <<endl;
}
