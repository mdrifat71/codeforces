#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p, n; cin >> p >> n;
    int arr[301];
    fill(arr, arr+301, 0);
    int ind = -1;
    for (int i = 0; i < n; i++)
    {
        int x ; cin >> x;
        if (arr[x % p] == 1 && ind == -1)
            ind = i + 1;
        else
            arr[x % p] = 1;
    }
    cout << ind <<endl;
}
