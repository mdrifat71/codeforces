#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, h; cin >> n >> h;
    int w = 0;
    while (n--)
    {
        int hp; cin >> hp;
        if (hp > h)
            w+=2;
        else
            w++;
    }
    cout << w <<endl;
}
