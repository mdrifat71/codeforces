#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int * a = new int[n];
        int * b = new int[n];
        int sa = 0, sb = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sa += a[i];
        }
        for (int i= 0; i < n; i++)
        {
            cin >> b[i];
            sb += b[i];

        }

        sort (a, a+n );
        sort (b, b+n );



        int rem = n / 4;
        for (int i = 0; i < rem; i++)
        {
            sa -= a[i];
            sb -= b[i];
        }
        if (sa >= sb )
        {
            cout << 0 << endl;
            continue;
        }

        int ct = 0;
        int i = rem;
        int j = rem - 1;
        int size = n % 4;
        while (sa < sb)
        {
            size++;
            sa += 100;
            if (size % 4 == 0)
            {
                if (i < n)
                    sa -= a[i];
                else
                    sa -= 100;
                i++;

            }
            else if (j >= 0)
            {
                sb += b[j];
                j--;
            }
            ct++;
        }
        cout << ct  << endl;
    }
}
