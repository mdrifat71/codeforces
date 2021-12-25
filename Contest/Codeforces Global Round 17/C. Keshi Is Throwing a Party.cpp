#include <bits/stdc++.h>
#define ll long long


using namespace std;

bool check(int x,int n, int * a, int * b)
{
    int ct = 0;
    int prev = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] >= prev && b[i] >= x-prev -1)
        {
            prev++;
            ct++;
        }


    }
    return ct >= x;
}
void solve()
{
    int n;
    scanf("%d", &n);
    int * a = new int[n+1];
    int * b = new int[n+1];

    for (int i = 1; i <= n;i++)
    {
        cin >>  b[i] >> a[i];
    }

    int mx = 0;
    int l = 1, r = n;
    while (l <= r)
    {
        int m = (l+r)/2;
        //cout << m << " m" << endl;
        if (check(m,n,a,b))
        {
            mx = m;
            l = m+1;
        }
        else
        {
            r = m-1;
        }
    }
    cout << mx << endl;

}
int main()
{
    int t; scanf("%d", &t);
    while(t--)
    {
        solve();
    }

}

