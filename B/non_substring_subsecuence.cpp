#include <iostream>

using namespace std;

void solve()
{
    int n, q; cin >> n >> q;
    string arr; cin >> arr;

    while (q--)
    {
        int l, r; cin >> l >> r;
        --l;
        --r;
        bool found = false;
        for (int i = 0; i < l; i++)
        {
            if (arr[i] == arr[l])
            {
                found = true;
                break;
            }
        }

        if (found)
        {
            cout << "YES" <<endl;
            continue;
        }


        for (int i = r+1; i < n; i++)
        {
            if (arr[i] == arr[r])
            {
                found = true;
                break;
            }
        }
        if (found)
            cout << "YES" <<endl;
        else
            cout << "NO" <<endl;
    }
}
int main()
{
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
}
