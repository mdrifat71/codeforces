
#include <bits/stdc++.h>
#define ll long long


using namespace std;
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second > b.second);
}
void solve()
{
    int n;
    cin >> n;
    int * arr = new int [n+1];
    vector <pair<int,int>> build;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        build.push_back(make_pair(i, x));
    }
    sort(build.begin(), build.end(), sortbysec);


    ll cnt = 0;
    ll p = 1, q = 1;
    for(int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            cnt +=  p * build[i].second * 2;
            arr[build[i].first] = p;
            p++;

        }
        else
        {
            cnt += q * build[i].second * 2;
            arr[build[i].first] = -q;
            q++;
        }
    }

    cout << cnt << endl;
    cout << 0 << " ";
    for (int i= 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    delete [] arr;
}
int main()
{
    int t; scanf("%d", &t);
    while(t--)
    {
        solve();
    }
}
