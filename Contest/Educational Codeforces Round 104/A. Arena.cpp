#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int arr[100];
        for (int i = 0; i < n; i++)
        {
             cin >> arr[i];
        }
        sort(arr, arr+n);
        int x = arr[0];
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == x)
                count++;
            else
                break;
        }
        cout << n - count << endl;
    }
}
