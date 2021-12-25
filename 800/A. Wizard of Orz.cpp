#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n; cin >> n;
        if (n ==1)
            cout << 9 ;
        else if (n==2)
            cout << 98 ;
        else
            cout << 989;

        int x = 0;
        for (int i = 0; i < n-3; i++)
        {
            cout << x ;
            x++;
            if (x > 9)
                x = 0;


        }
        cout << endl;

    }
}
