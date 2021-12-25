#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int x; cin >> x;
        int arr[9] = {1,2,3,4,5,6,7,8,9};

        int a[9];
        int k = 0;
        if (x > 45)
            cout << - 1 << endl;
        else
        {
            for (int i = 8; i >= 0; i--)
            {
                if (arr[i] <= x)
                {
                    x -= arr[i];
                    a[k] = arr[i];
                    k++;
                }

                if (x == 0)
                    break;
            }

            for (int i = k-1; i >= 0; i--)
                cout << a[i];
            cout << endl;
        }
    }
}
