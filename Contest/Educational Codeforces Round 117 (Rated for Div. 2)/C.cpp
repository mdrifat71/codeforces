
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
ll k, x;
void solve()
{
    scanf("%lld%lld", &k, &x);

     ll l, r;
     l = 1, r = 2*k-1;
     ll sum ;

     ll g = 0;
     while (l <= r)
     {
         ll m = (l+r)/2;
         sum = (m * (m+1))/2;
         ll p = 0;
         if (m > k )
         {
            p = m-k;
            sum -= p * (p+1);
         }

         if (x > sum - (m- 2*p) && x <= sum)
         {
             cout << m << endl;
             return;
         }
         else if (x > sum)
         {
             l = m+1;
         }
         else
            r = m-1;
     }

     cout << 2*k - 1 << endl;


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
