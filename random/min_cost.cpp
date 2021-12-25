#include <bits/stdc++.h>

using namespace std;

int ** mem = new int*[100];

int helper (int ** input, int m, int n, int i, int j)
{
    //checking memory
    if (mem[i][j] != NULL)
        return mem[i][j];
    //base case
    if (i == m - 1 && j == n - 1)
        return input[i][j];

    if (i == m - 1)
        return helper(input, m,n,i,j+1) + input[i][j];

    if (j == n - 1)
        return helper(input, m,n,i+1, j) + input[i][j];


    //recursion calls
    int x = helper (input, m, n, i, j+1);
    int y = helper (input, m, n, i+1, j+1);
    int z = helper (input, m, n, i+1, j);

    mem[i][j] = min(x, min(y,z)) + input[i][j];
    return mem[i][j];
}
int min_cost(int ** input, int m, int n)
{
    return helper (input, m, n, 0, 0);
}
int main()
{
    //mem declaration
    for (int i = 0; i < 100; i++)
    {
        mem[i] = new int[100];
        for (int j = 0; j < 100; j++)
            mem[i][j] = NULL;
    }
    int m, n;
    cin >> n >> m;
    int ** input = new int*[m];

    for (int i = 0; i < m; i++)
    {
        input[i] = new int [n];
        for (int j = 0; j < n; j++)
            cin >> input[i][j] ;
    }
    cout << min_cost (input, m, n);
}
