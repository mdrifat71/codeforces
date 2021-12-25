#include <iostream>

using namespace std;

int helper (int ** input, int m, int n, int i, int j)
{
    //base case
    if (i == m - 1 && j = n - 1)
        return input[i-1][j-1];

    if (i == m - 1)
        return helper(input, m,n,i,j+1) + input[i][j];

    if (j == n - 1)
        return helper(input, m,n,i+1, j) + input[i][j];

    //recursion calls
    int x = helper (input, m, n, i, j+1);
    int y = helper (input, m, n, i+1, j+1);
    int x = helper (input, m, n, i+1, j);

    return min(x, min(y,z)) + input[i][j];
}
int min_cost(int ** input, int m, int n)
{
    return helper (input, m, n, 0, 0);
}
int main()
{
    int m, n;
    cin >> n >> m;
    int ** input = new int[m];

    for (int i = 0; i < m; i++)
    {
        input[i] = new int [n];
        for (int j = 0; j < n; j++)
            cin >> input[i][j] ;
    }
    cout << min_cost (input, m, n);
}
