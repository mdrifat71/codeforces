#include <bits/stdc++.h>

using namespace std;


void solve()
{
    int n,m; cin >>n >> m;
    char arr[101];
    fill(arr, arr+101, 0);
    for(int i = 0; i < n; i++)
    {
        int tmp; cin >> tmp;
        arr[tmp] = 'y';
    }

    int c = 0;
    for (int i = 0; i < m; i++)
    {
        int tmp; cin >> tmp;
        if (arr[tmp] == 'y')
        {
            c++;
        }
    }
    cout << c <<endl;
}
int main()
{
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
}
