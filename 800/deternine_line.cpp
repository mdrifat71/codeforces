#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int arr[101];
    fill (arr, arr + 101, 0);

   for (int i = 0; i < n; i++)
    {
        int r; cin >> r;
        int tmp[r];
        for (int j = 0; j < r; j++) cin >> tmp[j];
        sort(tmp, tmp + r);
        for (int j = 0; j < r; j++)
        {
            arr[tmp[j]] += 1;
            while (tmp[j] == tmp[j+1])
                j++;
        }
    }

    for (int i = 1; i <= 100; i++)
    {
        if (arr[i] == n)
            cout << i << " ";
    }
    cout <<endl;

}
