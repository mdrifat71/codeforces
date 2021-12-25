#include <bits/stdc++.h>

using namespace std;

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second > b.second);
}

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    vector <pair <int, int>> arr;
    for (int i = 0; i < m; i++)
    {
        int tmp1, tmp2;
        scanf("%d%d", &tmp1, &tmp2);
        arr.push_back(make_pair(tmp1, tmp2));
    }
    sort(arr.begin(), arr.end(), sortbysec);

    int max = 0;
    for (auto v : arr)
    {
        if (n > v.first)
        {
            n -= v.first;
            max += v.first * v.second;
        }
        else
        {
            max+= v.second * n;
            break;
        }
    }

    cout << max <<endl;
}
