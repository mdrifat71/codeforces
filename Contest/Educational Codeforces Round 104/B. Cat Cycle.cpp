#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, k; cin >> n >> k;
        if (n % 2 == 0)
        {
            int position = k % n == 0 ? n : k % n;
            cout <<  position  << endl;
        }
        else
        {
            int gap = n / 2;
            int position  = k / gap +  k;

            position = k % gap  == 0 ? position - 1 : position;
            position = position % n == 0 ? n : position % n;

            cout << position << endl;
        }
    }
}
