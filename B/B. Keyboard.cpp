#include <bits/stdc++.h>

using namespace std;

char arr[30][30];
int mem[900];

int main()
{
    int n, m, x; cin >> n >> m >> x;

    vector < pair <int , int> > sarr;
    int sl = 0;

    for (int i = 0; i < n ; i++)
        for (int j = 0; j <  m ; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'S')
            {
                sarr.push_back(make_pair(i,j));
                sl++;
            }
        }

    int q; cin >> q;
    string s; cin >> s;

    fill(mem, mem+900, -1);


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (sl != 0)
            {
                int d = ceil(sqrt( (float)pow((sarr[0].first -i), 2) + pow(sarr[0].second - j, 2) ));
                for (int x = 1; x < sl; x++)
                {
                    int td = ceil(sqrt( (float)pow((sarr[x].first -i), 2) + pow(sarr[x].second - j, 2) ));
                    if (d > td)
                        d = td;
                }

                if (mem[arr[i][j]] == -1 || mem[arr[i][j]] > d)
                    mem[arr[i][j]] = d;

            }
            else
            {
                mem[arr[i][j]] = 1;
            }
        }
    }


    int count = 0;


    for (int i = 0; i < q; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            if (sl == 0 || mem[s[i]+32] == -1)
            {
                count  = -1;
                break;
            }

            if (mem[s[i]+32] > x)
            {
                count++;
            }
        }
        else if (mem[s[i]] == -1)
        {

            count = -1;
            break;
        }
    }

    cout << count << endl;

}
