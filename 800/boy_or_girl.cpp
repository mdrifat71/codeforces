#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    int l = str.length();
    int prev = 0;
    int dc = 1;
    for (int i = 0; i < l; i++)
    {
        if (str[prev] != str[i])
        {
            dc++;
            prev = i;
        }
    }

    if (dc % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}
