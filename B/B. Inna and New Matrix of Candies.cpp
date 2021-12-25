#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    set <int> mem;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }


    for (int i =  0; i < n; i++)
    {
        int S, G;
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 'S') S = j;
            if (arr[i][j] == 'G') G = j;
        }

        if (S - G < 1)
        {
            cout << - 1 <<endl;
            return 0;
        }
        mem.insert(S-G);
    }


    cout << mem.size() << endl;
}
