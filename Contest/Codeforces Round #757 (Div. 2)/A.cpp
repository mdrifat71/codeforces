#include <bits/stdc++.h>
#define ll long long
int arr[101];
using namespace std;

void solve()
{
    int n, l, r, k;
    cin >> n >> l >> r >> k;

    for (int i = 0; i < n; i++)
        cin >> arr[i] ;

    sort(arr, arr+n);

    int idx = -1;

    for (int i = 0; i < n;i++)
    {
        if (arr[i] >= l)
        {
            idx = i;
            break;
        }
    }

    if (idx == -1 || arr[idx] > r)
    {
        cout << 0 << endl;
        return;
    }

    int cnt = 0;
    for (int i = idx; i < n;i++)
    {
        if (arr[i] >=  l && arr[i] <= r && k - arr[i] >= 0 )
        {
            cnt++;
            k -= arr[i];
        }
        else
            break;
    }

    cout << cnt << endl;


}
int main()
{
    int t; scanf("%d", &t);
    while(t--)
    {
        solve();
    }
}
