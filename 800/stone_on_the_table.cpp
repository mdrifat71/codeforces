#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string str;
    cin >> n;
    cin >> str;

    int cur = 0;
    int ct = 0;
    for (int i = 1; i < n; i++)
    {
        if (str[i] == str[cur])
            ct++;
        cur++;
    }
    cout << ct <<endl;
}
