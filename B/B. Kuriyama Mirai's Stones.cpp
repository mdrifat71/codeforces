#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int arr[n];
    long long int prefix1[n],prefix2[n];
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
        prefix1[i] = sum;
    }
    sort(arr, arr+n);
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        prefix2[i] = sum;
    }

    int m; cin >> m;

    while (m--)
    {
        int t,l,r; cin >> t >> l >> r;
        --l, --r;

        if (t == 1)
        {
            sum = l == 0 ? prefix1[r] : prefix1[r] - prefix1[l-1];
            sum = sum == 0 ? prefix1[l] : sum;
        }
        else
        {
            sum = l == 0 ? prefix2[r] : prefix2[r] - prefix2[l-1];
            sum = sum == 0 ? prefix2[l] : sum;
        }

        cout << sum <<endl;
    }


}
