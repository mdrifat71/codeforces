#include <bits/stdc++.h>
using namespace std;
long long  arr[1000001];
long long  arr2[1000001];
void solve(long long arr[], int l, int r, int k)
{
    if (l == r)
    {
        cout << k-1 << endl;
        return;
    }

    long long dup = arr[r] - arr[l];
   // cout << dup << " d " << r << " " << l <<endl;
    long long cnt = dup + (k - (r - l + 1));
    cout << cnt << endl;
}
int main()
{
    int n, q, k;
    cin >> n >> q >> k;


    for (int i= 0;i  < n; i++)
    {
       cin >> arr[i];
    }


    arr2[0] = arr[0] - 1;
    for (int i= 1; i < n;i++)
    {
        arr2[i] = (arr[i] - arr[i-1]) - 1 + arr2[i-1];
    }

    for (int i = 0; i < q; i++)
    {
         int l, r; cin >> l >> r;
         --l, --r;
         solve(arr2, l, r, k);
    }
}
