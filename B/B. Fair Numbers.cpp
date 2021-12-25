#include <bits/stdc++.h>

using namespace std;

#define ll long long int
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll tmp = n;
        while (1)
        {

            bool valid = true;
            while (n != 0)
            {
                if (n % 10 == 0)
                {
                    n = n / 10;
                    continue;
                }
                if (tmp % (n % 10) != 0)
                {
                    valid = false;
                    break;
                }
                n = n/10;
            }

            if (valid == false)
            {
                tmp++;
                n = tmp;
            }
            else
            {
                cout << tmp << endl;
                break;
            }

        }

    }
}
