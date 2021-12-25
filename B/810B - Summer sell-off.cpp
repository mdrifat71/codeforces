#include <bits/stdc++.h>

using namespace std;
#define size 100000

int k[size];
int l[size];


int main()
{
    int n, f; cin >> n >> f;

    vector <pair <int, int> > a;

    for(int i = 0; i < n; i++)
    {
        cin >> k[i] >> l[i];
        a.push_back(make_pair(min(2*k[i], l[i]) - min(k[i],l[i]), i));
    }

    sort(a.rbegin(), a.rend());

    long long int ans = 0;

    for (int i =0; i < f; i++)
    {
        int pos = a[i].second;
        ans += (long long int) min(2*k[pos], l[pos]);
    }

    for (int i = f; i < n; i++)
    {
        int pos = a[i].second;

        ans+= (long long int) min(k[pos], l[pos]);
    }

    cout << ans << endl;

}
