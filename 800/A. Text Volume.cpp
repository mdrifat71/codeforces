#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    string s;
    getchar();
    getline(cin, s);


    int m = 0, v = 0;

    for (char c:s)
    {
        if (c == ' ')
        {
            if(m < v)
                m = v;
            v = 0;
        }
        else if (c >=65 && c <= 90)
            v++;
    }

    if (m < v)
        m = v;

    cout << m << endl;
}
