#include <bits/stdc++.h>

using namespace std;

void rod(int n)
{
    if (n >= 5)
        cout << "-O|";
    else
        cout << "O-|";

    for (int i = 0; i < 5; i++)
    {
        if (n % 5 == i)
            cout << "-";
        else
            cout << "O";
    }
    cout << endl;
}
int main()
{
    int n; cin >> n;

    if (n == 0)
        rod(0);
    else
        while (n != 0)
        {
            rod(n % 10);
            n = n / 10;
        }
}
