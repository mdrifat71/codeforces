#include <bits/stdc++.h>
using namespace std;
int j, k;
#define ll long long

void solve()
{
    int n; cin >> n;
    vector <int> arr;
    for (int i = 0; i < n; i++)
    {
        int tmp; cin >> tmp;
        arr.push_back(tmp);
    }
    sort(arr.begin(), arr.end(), greater<int>());
    ll alice = 0, bob = 0;
    for(int i = 0; i < n; i++)
    {
        if (i % 2 == 0 && arr[i] % 2 == 0)
            alice += arr[i];
        if (i % 2 != 0 && arr[i] % 2 != 0)
            bob += arr[i];
    }

    if (alice > bob)
        cout << "Alice" << endl;
    else if (alice < bob)
        cout << "Bob" << endl;
    else
        cout << "Tie" << endl;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}
