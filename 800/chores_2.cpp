#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, x; cin >> n >> k >> x;

    int start = n - k < 0 ? 0 : n - k;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int tmp; cin >> tmp;
        if (i >= start && tmp > x)
            sum += x;
        else
            sum += tmp;
    }


    /* sol -1
    ===========
    int sum = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (k > 0 && arr[i] > x)
            arr[i] = x;
        sum += arr[i];
        k--;
    }
    ===================*/
    cout << sum <<endl;
}
