#include <bits/stdc++.h>

using namespace std;

bool isVowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    return false;
}
int main()
{
    string one,two,three;
    getline(cin, one);
    getline(cin, two);
    getline(cin, three);

    int vowel = 0;
    for (char c : one)
        if (isVowel(c))
            vowel++;
    if (vowel != 5)
    {
        cout << "NO" << endl;
        return 0;
    }

    vowel = 0;
    for (char c : two)
        if (isVowel(c))
            vowel++;
    if (vowel != 7)
    {
        cout << "NO" << endl;
        return 0;
    }

    vowel = 0;
    for (char c : three)
        if (isVowel(c))
            vowel++;
    if (vowel != 5)
    {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" <<endl;
}
