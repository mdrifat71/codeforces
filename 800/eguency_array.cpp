#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, l; cin >> n >> l;
    int arr[n];
    int m = 0, p = 0;
    for (int i = 0; i < n; i++)s
    {
        cin >> arr[i];
        if (arr[i] < 0)
            m++;
        else
            p++;
    }

    while (l--)
    {
        int q, r; cin >> q >> r;
        int x = r - q + 1;
        if (x % 2 == 0)
        {
            if (p >= x/2 && m >= x/2)
               cout << 1 <<endl;
            else
                cout << 0 <<endl;
        }
        else
             cout << 0 <<endl;
    }
}
