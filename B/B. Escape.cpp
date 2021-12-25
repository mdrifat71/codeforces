#include <bits/stdc++.h>

using namespace std;

int main()
{
    float vp, vd; cin >> vp >> vd;
    int  t, f, c ; cin >> t >> f >> c;

    float xp = vp * t;
    float xd = 0;
    int b = 0;

    if (vd <=  vp)
    {
        cout << 0 << endl;
        return 0;
    }
    while (xp < c)
    {
        float a = (xp - xd) / (float)(vd - vp);
        xp += a * vp;
        xd += a * vd;

        if (xp >= c)
        {
            break;
        }

        b++;
        xp += vp * (xd/vd + f);
        xd = 0;

    }

    cout << b << endl;
}
