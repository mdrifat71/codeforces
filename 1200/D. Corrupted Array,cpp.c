#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n; cin >> n;
        int * arr = new int [n+2];
        sort (arr, arr + n + 2);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }

        if (sum != arr[n] && sum != arr[n+1])
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i= 0; i < n; i++)
                cout << arr[i] << " ";
            if (arr[n] == sum)
                cout << arr[n] << endl;
            else
                cout << arr[n+1] << endl;
        }
    }
}
