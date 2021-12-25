#include <bits/stdc++.h>

using namespace std;

bool isBear (string s, int i)
{
    if (i - 3 >= 0)
    {
        if (s[i-1] == 'a' && s[i-2] == 'e' && s[i-3] == 'b' )
            return true;
        return false;
    }
    return false;

}
int main()
{
    string s; cin >> s;
    int l = s.length();
    int d = l-1;
    long long int count  = 0;
    for (int i = l-1; i >= 0; i--)
    {
        if (s[i] == 'r')
        {
            if (isBear(s, i))
            {
                int k = i - 3;
                int x = d - i;
                count += ((1 + x) + k * (x+1));
                d = i - 1;
                i -= 3;

            }
        }
    }

    cout << count << endl;
}
