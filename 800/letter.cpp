#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    char arr[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) cin >> arr[i][j];

    int rs = -1, re, cs = -1, ce;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == '*')
            {
                if (rs == -1)
                    rs = i;
                re = i;
            }
        }
    }

    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i][j] == '*')
            {
                if (cs == -1)
                    cs = j;
                ce = j;

            }
        }
    }

   // cout << rs << " " << re << " " << cs << " " << ce <<endl;
    for (int i = rs; i <=re; i++)
    {
        for (int  j = cs; j <=ce; j++)
            cout << arr[i][j] ;
        cout << endl;
    }
}
