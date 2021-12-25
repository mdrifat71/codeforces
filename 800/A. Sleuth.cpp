#include <bits/stdc++.h>

using namespace std;
bool isVowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y')
        return true;
    else
        return false;
}
int main()
{
    string s;
    getline(cin, s);
    int n = s.length();

    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] != '?' && s[i] != ' ')
        {
            if (isVowel(s[i]))
            {
                cout << "YES" <<endl;
            }
            else
                cout << "NO" <<endl;
            break;
        }
    }
}
