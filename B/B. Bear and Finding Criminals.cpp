#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a; cin >> n >> a;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    --a;
    int f = a;
    int b = a;
    int c = 0;
    while (f < n || b >= 0)
    {
        if (f == b && arr[f] == arr[b] && arr[f] == 1)
            c++;
        else if (f < n && b >= 0 && arr[f] == arr[b] && arr[f] == 1)
            c+=2;
        else if ((f >= n && arr[b] == 1)|| (b < 0 && arr[f] == 1))
            c++;

        f++;
        b--;
    }

    cout << c <<endl;
}
