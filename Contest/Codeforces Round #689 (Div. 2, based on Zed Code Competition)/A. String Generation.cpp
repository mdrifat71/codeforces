#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);
    for (int i = 0; i < k; i++)
        printf("a");
    for (int i = 1; i <= n - k; i++)
    {
        if (i % 3 == 1)
            printf("c");
        else if (i % 3 == 2)
            printf("b");
        else
            printf("a");
    }

    printf("\n");
}
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        solve();
    }
}
