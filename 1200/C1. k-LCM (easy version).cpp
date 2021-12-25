#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long n, k; cin >> n >> k;
        n = n - (k - 3);
        for (int i = n/2; i >= n/4; i--)
        {
            int a = (n - i) / 2 ;
            int b = n - 2 * i;
           // cout << a << " ab " << b << endl;
            if (i % a == 0 && 2 * a + i == n)
            {

                cout << i << " " << a << " " << a <<endl;
                break;
            }
            else if ( b != 0 && i % b == 0 && i * 2 + b == n)
            {
                cout << i << " " << i << " " << b << " ";
                break;
            }
        }

        for (int i = 0; i < k - 3; i++)
            cout << 1 << " ";
        cout << endl;
    }
}
