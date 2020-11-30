#include <iostream>
#include <cmath>

using namespace std;
char tolower(char c)
{
    if (c >= 65 && c <= 90)
        c = c + 32;

    return c;
}
int main()
{
    string s1, s2;

    cin >> s1 >> s2;


    int i = 0;

    while(s1[i] != NULL)
    {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
        if (s1[i] > s2[i])
        {
            cout << 1 <<endl;
            return 0;
        }
        else if (s1[i] < s2[i])
        {

            cout << -1 <<endl;
            return 0;
        }
        i++;
    }
    cout << 0 <<endl;

}
