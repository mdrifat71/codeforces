#include <bits/stdc++.h>
using namespace std;
int n;
long long u, v;
int arr[101];
int mxcol = 106+1;
void solve()
{
    scanf("%d%ld%ld", &n, &u, &v);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    long long cost = 0;
    bool gone = false;
    for (int i= 1; i < n; i++)
    {
        if (abs(arr[i]- arr[i-1]) <= 1)
        {
            if (abs(arr[i]- arr[i-1]) == 1)
                gone = true;
            if (arr[i] == 0)
            {
                cost += min(u, v);
                break;
            }
            else if (i+1 == n)
            {
                if (gone)
                    cost += min(u, v);
                else
                    cost += v + min(u, v);
                printf("%ld\n", cost);
                return;
            }
        }
        else
            break;
    }

    for (int i = n-1; i > 0; i--)
    {
        if (abs(arr[i] - arr[i] - 1) <= 1)
        {
            if (arr[i] == mxcol)
            {
                cost += min(u, v);
                break;
            }
        }
        else
            break;
    }

    printf("%ld\n", cost);
}

void solve2()
{
    int n, u, v, ans;
    int a[101];
    ans = INT_MAX;
    cin >> n >> u >> v;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = 2; i <= n; i++)
    {
        if(abs(a[i] - a[i - 1]) >= 2) ans = 0;
        if(abs(a[i] - a[i - 1]) == 1) ans = min(ans, min(u, v));
        if(a[i] == a[i - 1]) ans = min(ans, v + min(u, v));
    }
    cout << ans << endl;
}
int main()
{
    int t; scanf("%d", &t);
    while(t--)
    {
        solve2();
    }
}
