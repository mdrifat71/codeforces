#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{
    int n; cin >> n;
    vector <ll> arr;
    for (int i = 0; i < n; i++)
    {
        ll tmp; cin >> tmp;
        arr.push_back(tmp);
    }


    for (int i=0; i < n; i++)
    {
        if (i+1 < n)
            arr[i+1] += (arr[i] - i);
        if (arr[i] >= i)
            arr[i] = i;
    }

    bool poss = true;
    for (int i = 1; i < n;i++)
    {
        if (arr[i] <= arr[i-1])
            poss = false;
    }

    if (poss)
        cout << "YES" <<endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int t; cin >> t;
    while (t--)
    {
        solve();
    }

}

