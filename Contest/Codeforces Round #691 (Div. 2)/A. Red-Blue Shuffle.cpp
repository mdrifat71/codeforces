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
        int n; cin >> n;
        string r, b; cin >> r >> b;


        int rc = 0, bc = 0;

        forf(0,n)
        {
            if (r[i] > b[i])
                rc++;
            else if (r[i] < b[i])
                bc++;
            else
            {
                rc++;
                bc++;
            }
        }


        if (rc > bc)
            cout << "RED" <<endl;
        else if (bc >   rc)
            cout << "BLUE" << endl;
        else
            cout << "EQUAL" << endl;


    }
}
