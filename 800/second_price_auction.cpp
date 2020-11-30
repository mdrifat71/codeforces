#include <bits/stdc++.h>

using  namespace std;

int main()
{
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int f = 0, s = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[f])
        {
            s = f;
            f = i;
        }
        else
        {
            if (f == s)
                s = i;
            else if (arr[i] > arr[s])
                s = i;
        }
    }

    cout << f + 1 << " " << arr[s] <<endl;
}
