#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;

    int gap = 1;
    int pos = 1;

    while (gap != n)
    {
        pos += gap;
        if (pos > n)
            pos = pos - n;
        cout << pos << " ";
        gap++;
    }
    cout << endl;
}
