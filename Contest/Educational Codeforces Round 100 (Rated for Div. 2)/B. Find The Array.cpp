
#include <bits/stdc++.h>

using namespace std;


#define forf(a,b) for (int i = a ; i < b; i++)
#define forb(a,b) for (int i = a-1; i >= 0; i--)
#define forn(a,b) for (int i = a; i <=b; i++)
#define ll long long int



int arr[50];
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        forf(0,n)
            cin >> arr[i];

        ll even = 0;
        ll odd = 0;

        forf (0,n)
        {
            if (i % 2 == 0)
                odd += arr[i];
            else
                even += arr[i];
        }

        if (odd > even)
        {
            forf(0,n)
            {
                if (i % 2 != 0)
                    cout << 1 << " ";
                else
                    cout << arr[i] << " ";
            }
        }
        else
        {
            forf(0,n)
            {
                if (i % 2 == 0)
                    cout << 1 << " ";
                else
                    cout << arr[i] << " ";
            }
        }
        cout << endl;
    }
}
