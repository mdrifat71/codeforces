#include <bits/stdc++.h>
using namespace std;

#define ll long long int


int arr[500000];


void solve()
{

    int n; cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];


    int M = 0;
    for (int x = 0; x < n; x++)
    {
        if (M >  n-x)
            break;
        int m = 0;
        for (int i = x; i < n-2; i++)
        {

            int a, b;
            a = min (arr[i], arr[i+1]);
            b = min (arr[i+1], arr[i+2]);

            if (i == n - 3 && a <= b)
                m+= 2;

            if (a <= b)
                m++;
            else
            {
                while (i < n - 2 && a >= b)
                {
                    b = min (arr[i+1], arr[i+2]);
                    i++;
                    if (a <= b)
                        m++;
                }
            }
        }

        if (M < m)
            M = m;
    }
    cout << M<< endl;
}
int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
