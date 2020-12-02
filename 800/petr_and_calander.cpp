#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, d; cin >> m >> d;
    int month[] = {31, 28, 31, 30, 31, 30, 31,31,30,31,30,31};

    int day = month[m-1];
    --d;
    int a = 7 - d;
    day -= a;

    int col = day % 7 == 0 ? day / 7 + 1 : day / 7 + 2;
    cout << col;
}
