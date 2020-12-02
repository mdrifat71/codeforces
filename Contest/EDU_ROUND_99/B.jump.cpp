#include <bits/stdc++.h>

using namespace std;
/*
while (steps * (steps + 1) < 2 * x)
            steps++;

        if (steps * (steps + 1) / 2 == x + 1)
            steps++;

*/
int main()
{
    int t; cin >> t;

    //t = 1;
    while (t--)
    {
        int x; cin >> x;


        int pos = 0, jump = 1;
        while (pos + jump < x)
        {
            pos += jump;
            jump++;
        }
        jump--;

        if (x + 1 == pos)
            jump++;

        cout << jump <<endl;


        //cout << steps << endl;

    }
}
