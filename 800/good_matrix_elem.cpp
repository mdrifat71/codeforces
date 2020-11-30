#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int mat[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cin >> mat[i][j];

    int sum = 0;

    //main diagonal
    for (int i = 0; i < n; i++) sum += mat[i][i];


    //secondary
    for (int i = 0, j = n - 1; i < n && j >= 0; j--,i++) sum += mat[i][j];

    //mid col
    for (int i = 0; i < n; i++) sum += mat[i][n/2];

    // mid row
    for (int i = 0; i < n; i++) sum += mat[n/2][i];

    cout << sum  - mat[n/2][n/2] * 3<<endl;

}
