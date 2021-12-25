
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, k, x; cin >> n >> k >> x;
    ll * arr = new ll [n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr+n);
    vector <int> gap;
    ll t = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - arr[i-1] > x)
        {
            gap.push_back(arr[i] - arr[i-1]);
            t++;
        }

    }

    sort(gap.begin(), gap.end());

    for (int i = 0; i < gap.size(); i++)
    {
        ll req = (gap[i]/x);
        if (gap[i] % x == 0)
            req;

        if (k != 0 && k >= req)
        {
            k -= req;
            t--;
        }
        else
        {
            break;
        }
    }

    cout << t << endl;
}
