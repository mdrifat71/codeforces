#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int * b = new int[n];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int m; cin >> m;
    int * g = new int[m];
    for (int i = 0; i < m; i++)
        cin >> g[i];

    sort(b, b+n);
    sort(g, g+m);

    int p = 0;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        int j = k;
        while (j < m && g[j] <= b[i] + 1 )
        {
            if ( abs(b[i] - g[j]) <= 1)
            {
                p++;
                k = j+1;
                break;
            }
            j++;
        }
    }
    cout << p << endl;
}
