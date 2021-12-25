#include <bits/stdc++.h>
using namespace std;
const int mx = 100000+1;
int x[mx], y[mx] , n, p, q;
int main()
{
    int t; scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        p = q = -1;
        for (int i(0); i < 2 * n; i++)
        {
            int a,b;
            scanf("%d%d", &a, &b);
            if (a == 0)
                y[++p] = abs(b);
            else
                x[++q] = abs(a);
        }
        sort (x, x + n);
        sort (y, y + n);
        double sum = 0;
        for (int i = 0; i < n; i++)
            sum += sqrt(1.0*x[i] * x[i] + 1.0*y[i] * y[i]);

        printf("%.15lf\n", sum);
    }
    return 0;
}
