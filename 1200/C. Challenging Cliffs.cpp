#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n ; cin >> n;
        int * arr = new int[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr+n);

        if (n == 2)
        {
            cout << arr[0] << " " << arr[1] << endl;
            continue;
        }
        int x;
        int diff = INT_MAX;
        for (int i = 1; i < n; i++)
        {
            if (abs(arr[i] - arr[i-1]) < diff)
            {
                diff = abs(arr[i] - arr[i-1]);
                x = i;
            }
        }


        for (int i = x; i < n; i++)
            cout << arr[i] << " ";
        for (int i = 0; i < x; i++)
            cout << arr[i] << " ";
        cout << endl;




    }
}
