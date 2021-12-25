#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int x, y;
    cin >> x >> y;
    int k;
    cin >> k;
    vector <pair <int, int > > vec;
    for (int i = 0; i < k; i++)
    {
        int dx, dy;
        cin >> dx >> dy;
        vec.push_back(make_pair(dx, dy));
    }

    long long int step = 0;
    for (int i = 0; i < k; i++)
    {
        int dx = vec[i].first;
        int dy = vec[i].second;

        int d2x = n-x;
        if (dx < 0)
        {
            d2x = x-1;
        }

        int d2y = m - y;
        if (dy < 0)
        {
            d2y =  y-1;
        }


        long long int cs;
        if (dx == 0)
        {
            cs = d2y/abs(dy);
        }
        else if (dy == 0)
        {
            cs = d2x/abs(dx);

        }
        else
        {

            cs = min ((d2x/abs(dx)), (d2y/abs(dy))) ;

        }

       // cout << cs << endl;
        x += (cs * dx);
        y += (cs * dy);
        step += cs;

    }
    cout << step << endl;
}
