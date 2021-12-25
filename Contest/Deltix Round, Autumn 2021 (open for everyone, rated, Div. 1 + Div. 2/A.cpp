#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector <long long> arr(n);
        long long cnt = 0;
        for (int i= 0; i < n; i++)
        {
            long long tmp; cin >> tmp;
            if (tmp % 2 == 0)
            {
                while(tmp % 2 == 0)
                {
                    cnt ++;
                    tmp =tmp/2;
                }
            }
            arr.push_back(tmp);
        }
        sort(arr.begin(), arr.end());

        for (int i = 0; i < cnt; i++)
            arr.back() *= 2;
        cout << accumulate(arr.begin(), arr.end(),0LL) << endl;
    }
}
