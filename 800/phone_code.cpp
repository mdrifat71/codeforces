#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    string phone[n];
    for(int i = 0; i < n; ++i) cin >> phone[i];

    int l = phone[0].length();
    int ct = 0;

    for (int j = 0; j < l; j++)
    {
         bool match = true;
         for (int i = 0; i < n - 1; i++)
         {
             if (phone[i][j] != phone[i+1][j])
             {
                 match = false;
                 break;
             }
         }

         if (match)
             ct++;
         else
            break;
    }

    cout << ct << "\n";


}
