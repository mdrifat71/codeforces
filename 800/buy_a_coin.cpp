#include <iostream>

using namespace std;


int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, c0, c1, h;
        cin >> n >> c0 >> c1 >> h;
        string str;
        cin >> str;

        int z_count = 0, o_count = 0;
        int total = 0;
        int exc = 0;
        for (int i = 0; i< n; i++)
        {
            if (str[i] == '0')
                z_count++;
            else
                o_count++;
        }

        int indt, zt, ot;
        indt = c0 * z_count + c1 * o_count;
        zt = c0 * n + h * o_count;
        ot = c1 * n + h * z_count;

        if (indt <= zt && indt <= ot)
        {
            cout << indt <<endl;
        }
        else if (zt <= indt && zt <= ot)
        {
            cout << zt <<endl;
        }
        else
            cout << ot <<endl;
    }
}
