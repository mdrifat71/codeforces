#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int arr[n],tmp[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        for (int i = 0; i < n; i++) tmp[i] = arr[i];

        sort(arr, arr+n);
        int ind = -1;
        for (int i = 0; i < n; i++)
        {
            int c = 0;
            while (i < n  && arr[i] == arr[i+1] )
            {
                c++;
                i++;
            }

            if (c == 0)
            {
                ind = i;
                break;
            }
        }

        if (ind != -1)
            for (int i = 0; i < n; i++)
            {
                if (arr[ind] == tmp[i])
                {
                    cout << i + 1 <<endl;
                    break;
                }
            }
        else
            cout << -1 <<endl;
    }
}
