#include <bits/stdc++.h>

using namespace std;
int arr[1001];
int arr2[1001];
int main()
{
    int p,q,l,r; cin >> p >> q >> l >> r;

    fill(arr, arr+1001, 0);
    fill(arr2, arr2+1001, 0);

    int max = 0;
    for (int i = 0; i < p; i++)
    {
        int a, b; cin >> a >> b;
        for (int i = a; i <= b; i++ )
            arr[i] = 1;
        if (max < b)
            max = b;
    }

    for (int i = 0; i< q; i++)
    {
        int c, d; cin >> c >> d;
        for (int t = l; t <= r; t++)
        {
            int start = c + t ;
            int end = d + t > max ? max : d + t;

            for (int x = start; x <= end; x++)
            {
                if (arr[x] == 1)
                {
                    arr2[t] = 1;
                    break;
                }
            }

        }
    }

    int count = 0;
    for(int i = l; i <= r; i++)
    {
        if (arr2[i] == 1)
            count++;
    }
    cout << count << endl;
}
