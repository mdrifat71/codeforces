#include <bits/stdc++.h>

using namespace std;

int main()
{
    char mat[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) cin >> mat[i][j];


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (mat[i][j] == 'X')
            {
                if (mat[2-i][2-j] != 'X')
                {
                    cout << "NO" <<endl;
                    return 0;

                }

            }
        }
    }

    cout << "YES" <<endl;
}
