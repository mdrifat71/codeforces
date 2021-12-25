#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    string s1 = s;

    int m = ceil(n/2.0)-1;

    s1[m] = s[0];
    int right = m + 1;

    for (int i = 1; i < n; i++)
    {
        if ((n - i) % 2 == 0)
        {
            m = ceil((n-i)/2.0) - 1;
            s1[m] = s[i];
        }
        else
        {
            s1[right] = s[i];
            right++;
        }

    }

    cout << s1 <<endl;

}
