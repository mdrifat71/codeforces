#include <bits/stdc++.h>
using namespace std;
#define LOG(str) cout << str <<endl

void solve()
{
    int n,k; cin >> n >> k;
    int arr[n*k];
    for (int i = 0; i < n*k; i++) cin >> arr[i];

    long long int sum = 0;
    int med = n - ceil(n/2.0);

    int g = 0;
    int i = n*k - 1;
    while (g != k)
    {
        sum += arr[i-med];
        i -= med + 1;
        g++;
    }
    cout << sum <<endl;
}


/*
1
4 3
2 4 16 18 21 27 36 53 82 91 92 95

*/
int main()
{
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
}
