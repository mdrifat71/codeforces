#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, m; cin >> n >> h >> m;
    int profit = 0;
    int arr[n+1];
    fill(arr, arr+n+1, h);
    for (int i = 1; i <= m; i++)
    {
        int l,r,x; cin >> l >> r >> x;
        for (int j = l; j <=r; j++)
        {
            if (arr[j] > x)
                arr[j] = x;
        }
    }

    for (int i = 1; i <= n; i++)
        profit += pow(arr[i], 2);
    cout << profit <<endl;
}
