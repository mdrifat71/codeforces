#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    char arr[7] = {'R','O','Y','G','B','I','V'};

    int k = 0;
    int x = n % 7;
    n = n - x;
    for (int i = 0; i < n; i++)
    {
        if (k == 7)
            k = 0;
        cout << arr[k];
        k++;
    }

    k = 3;
    for (int i = 0; i < x; i++)
    {
        if (k > 6)
            k = 3;
        cout << arr[k];
        k++;
    }
    cout << endl;
}
