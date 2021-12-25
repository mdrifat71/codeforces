#include <bits/stdc++.h>

using namespace std;

int arr[102][102];
int main()
{

    for (int i = 0; i < 102; i++)
        for (int j = 0; j < 102; j++)
            arr[i][j] = 0;

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int a, b;
        cin >> a >>  b;
        arr[a][b] = 1;
        arr[b][a] = 1;
        arr[a][0]++;
        arr[b][0]++;

    }

    int g = 0;
    while (1)
    {
        int kick = 0;
        int s = 0;
        for (int i = 1; i <= n; i++)
        {
            if (arr[i][0] != 0)
                s++;

            if (arr[i][0] == 1)
            {
               // cout << i << endl;
                kick++;
                arr[i][0] = 0;
                for (int a = 1; a <= n; a++)
                {
                    if (arr[i][a] == 1)
                    {

                        arr[a][i] = 0;
                        arr[a][101]++;
                        break;
                    }
                }
            }
        }

        if (kick > 0 && s != 1)
        {
            g++;
            for (int i = 1; i <= n; i++)
            {
                if (arr[i][101] != 0)
                {
                   // cout  << arr[i][101] << endl;
                    arr[i][0] = arr[i][0] - arr[i][101];
                    arr[i][101] = 0;
                }
            }
        }
        else
            break;
    }

    cout << g << endl;
}
