
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s; cin >> s;

        int m = INT_MAX;
        for (int i = 0; i < n; i++)
        {

            int x = 1;
            if (s[i] == 'a')
            {
               int b = 0, c = 0, a = 1;
               int sa = -1;
               i++;
               while (i < n)
               {
                   if (s[i] == 'b')
                    b++;
                   else if (s[i] == 'c')
                    c++;
                   else
                   {
                       a++;
                       if (sa == -1)
                        sa = i;
                       if (b < 2 && c < 2)
                       {
                         x = a + c + b;
                         i--;
                         break;
                       }
                       else if (a == 3 && b < 3 && c < 3)
                       {
                           x = a + b + c;
                           i = sa - 1;
                           break;
                       }
                       else if (a == 3)
                       {
                           i = sa - 1;
                           break;
                       }
                   }

                   i++;
               }
            }

            if (x != 1 && x < m)
                m = x;
        }

        if (m != INT_MAX)
            cout << m << endl;
        else
            cout <<  -1 << endl;

    }
}
