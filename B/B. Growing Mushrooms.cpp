#include <bits/stdc++.h>

using namespace std;

bool sortbysec( pair<int,double> &a,  pair<int,double> &b)
{
    if (a.second == b.second)
    {
        return (a.first < b.first);
    }
    return (a.second > b.second);
}
int main()
{
    int n, t1, t2, k; cin >> n >> t1 >> t2 >> k;
    vector <pair <int , int >> speed;
    for (int i = 0; i < n; i++ )
    {
        int v, u; cin >> v >> u;
        speed.push_back(make_pair(v, u));
    }

    vector <pair < int , double > > result;

    for (int i = 0; i < n; i++)
    {
        double growth = (double)max((speed[i].first * t1 * (double) (100-k)/100.00 + t2 * speed[i].second), (speed[i].second * t1 * (double)(100-k)/100.00 + speed[i].first * t2));
        result.push_back(make_pair(i+1, growth));
    }

    sort(result.begin(), result.end(), sortbysec);
    for (int i = 0; i < n; i++)
    {
        //cout << result[i].first << " " << result[i].second << endl;
        printf("%d %.2lf\n", result[i].first, result[i].second);
    }
}
