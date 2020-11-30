#include <iostream>

using namespace std;

bool isVowel(char c)
{
    if (c == 'a' || c =='e' || c == 'i' || c == 'o' || c == 'y' || c == 'Y' || c == 'u' || c == 'A' || c == 'I' || c == 'O' || c == 'U' || c == 'E')
        return true;
    else
        return false;
}

bool isUpper(char c)
{
    if (c >= 65 && c <= 90)
        return true;
    else
        return false;
}
int main()
{
    string s, ns ="";
    cin >> s;

    for (char c:s)
    {
        if (!isVowel(c))
        {
            if(isUpper(c))
            {
                c = c + 32;
            }
            ns.push_back('.');
            ns.push_back(c);
        }
    }

    cout << ns ;

}
