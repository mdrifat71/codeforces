#include <iostream>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    int l = s.length();

    for (int i = 0; i < l; i++)
    {
        if (s[i] != t[l-i-1])
        {
            cout << "NO" <<endl;
            return 0;
        }
    }

    cout << "YES" <<endl;
}
