#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    for (int i = 0; i < n;  i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] != 1)
            {
                bool got = false;

                for(int k = 0; k < n; k++)
                {
                    if (got == true)
                        break;
                    for (int l = 0; l < n; l++)
                    {
                        if (arr[i][k] + arr[l][j] == arr[i][j])
                        {
                            got = true;
                            break;
                        }
                    }
                }

                if (got == false)
                {
                    cout << "No" <<endl;
                    return 0;
                }
            }
        }
    }

    cout << "Yes" <<endl;
}
