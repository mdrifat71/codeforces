#include <bits/stdc++.h>

using namespace std;


#define forf(a,b) for (int i = a ; i < b; i++)
#define forb(a,b) for (int i = a-1; i >= 0; i--)
#define forn(a,b) for (int i = a; i <=b; i++)
#define ll long long int



int main()
{
    int t; cin >> t;

    while (t--)
    {
        ll arr[3];
        forf(0,3)
            cin >> arr[i];

        ll sum = arr[0] + arr[1] + arr[2];
        ll min = arr[0];
        forf(1,3)
        {
            if (arr[i] < min)
                min = arr[i];
        }
        int extra = (sum - min) % 8 == 0 ? 1 : 0;
        ll ms = min - (((sum-min) / 8)-extra);

        if (  sum % 9 == 0 && ms > 0)
            cout << "YES" <<endl;
        else
            cout << "NO" <<endl;
    }
}
