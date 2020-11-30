#include <bits/stdc++.h>

using namespace std;

bool isUpper(char c)
{
    if( c >= 65 && c <= 90)
        return true;
    return false;
}

string convertUpper(string s)
{
    int l = s.length();

    for (int i = 0; i < l; i++)
    {
        if (!isUpper(s[i]))
            s[i] = s[i] - 32;
    }

    return s;
}

string convertLower(string s)
{
    int l = s.length();

    for (int i = 0; i < l; i++)
    {
        if (isUpper(s[i]))
            s[i] = s[i] + 32;
    }
    return s;
}
int main()
{
    string str;
    cin >> str;

    int u = 0, l = 0;

    for (char c:str)
    {
        if (isUpper(c))
            u++;
        else
            l++;
    }



    if (u > l)
        str = convertUpper(str);
    else
        str = convertLower(str);

    cout << str << endl;


}
