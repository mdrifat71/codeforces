#include <bits/stdc++.h>

using namespace std;


void solve()
{

    cout << p << endl;
    int n, q; cin >> n >> q;
    string s; cin >> s;
    int cnt = 0;

    auto check = [&](int i)
    {
        return (0 <= i && i+2 < n && s[i] =='a' && s[i+1] == 'b' && s[i+2] == 'c');
    };


    for (int i= 0; i < n-2;i++)
        if (check(i) )
            cnt++;

    while(q--)
    {
        int pos; cin >> pos;
        char c ; cin >> c;
        --pos;
        cnt -= check(pos-2);
        cnt -= check(pos-1);
        cnt -= check(pos);
        s[pos] = c;
        cnt += check(pos-2);
        cnt += check(pos-1);
        cnt += check(pos);
        cout << cnt << endl;

    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}
