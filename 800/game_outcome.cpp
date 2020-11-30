#include <bits/stdc++.h>

using namespace std;

int arr[31][31];

int sum_arr(int fixed, int ind,  int n)
{
    int sum = 0;
    if (fixed == 0)
        for (int i = 0; i < n; i++) sum += arr[ind][i];
    else
        for (int i = 0; i < n; i++) sum += arr[i][ind];

    return sum;
}
int main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cin >> arr[i][j];

    int wc = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int row = sum_arr(0, i, n);
            int col = sum_arr(1, j, n);
            if (col > row)
                wc++;
        }
    }
    cout << wc <<endl;

}
