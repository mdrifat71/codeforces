
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n; cin >> n;
    int * arr = new int[n];

    ll sum = 0;
    map <int , int> total;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        total[arr[i]]++;
        sum += arr[i];
    }



    if ((sum * 2) % n != 0)
    {
        cout << 0 << endl;
        return;
    }

    //main logic
    int needs = (sum * 2)/n;
    ll p = 0;

    for (int i = 0; i < n; i++)
    {
       int a = arr[i];
       int b = needs - arr[i];

       if (total.count(b))
            p += total[b];
       if (a == b)
            p--;

    }

    cout << p/2 << endl;




}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}

/*
#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    vector<int> a(n);
    map<int, int> cnt;
    for (auto &x : a) {
      scanf("%d", &x);
      cnt[x] += 1;
      //cout << cnt[x] << endl;
    }
    long long sum = accumulate(a.begin(), a.end(), 0LL);
    if ((2 * sum) % n != 0) {
      puts("0");
      continue;
    }
    long long need = (2 * sum) / n;
    long long ans = 0;
    for (int i = 0; i < n; ++i) {
      int a1 = a[i];
      int a2 = need - a1;
    //  cout << cnt[a2] << endl;
      if (cnt.count(a2))
        ans += cnt[a2];
      if (a1 == a2) ans -= 1;
      cout << ans << " df " <<  endl;
    }
    printf("%lld\n", ans / 2);
  }
}
*/
