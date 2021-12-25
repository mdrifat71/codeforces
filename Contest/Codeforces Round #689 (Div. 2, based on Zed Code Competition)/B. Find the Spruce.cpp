#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n,m;
    scanf("%d", &n);
    scanf("%d", &m);
    char arr[n][m];
    for (int i  = 0; i < n; i++)
        scanf("%s", &arr[i][0]);


    long long int total = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (arr[i][j] == '*')
            {
                total++;
                int start = j - 1;
                int end = j + 1;


                if (start >= 0 && end < m)
                {
                    for (int a = i+1; a < n; a++)
                    {
                        bool valid = true;

                        if (start >= 0 && end < m)
                        {

                            for (int b = start; b <= end; b++)
                            {
                                if (arr[a][b] != '*')
                                {
                                    valid = false;
                                    break;
                                }
                            }
                        }
                        else
                            break;

                        if (valid)
                        {
                            total++;
                            start--;
                            end++;
                        }
                        else
                            break;
                    }
                }
            }
        }
    }

    printf("%lld\n", total);
}

void solves()
{
    int n, m; cin >> n >> m;
    char arr[n][m];
    int arr2[n][m];
    for (int i = 0; i < n; i++)
        scanf("%s", &arr[i]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            arr2[i][j] = 0;

    for (int i = 0; i < n; i++)
    {
        int k = 1;
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == '*')
                arr2[i][j] = k;
            else
                k++;
        }
    }


    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == '*')
            {
                sum++;
                int start = j - 1;
                int end = j + 1;
                for (int r = i + 1; r < n; r++)
                {
                    if ((start >= 0 && end < m )&& (arr2[r][start] == arr2[r][end]) && (arr2[r][start] != 0) )
                    {
                        sum++;
                    }
                    else
                        break;
                    start--;
                    end++;
                }
            }
        }
    }

    cout << sum << endl;

}
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        solves();
    }
}
