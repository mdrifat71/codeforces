#include <iostream>

using namespace std;

bool strcm(string s1, string s2, int l)
{
    bool istrue = true;
    for (int i = 0; i < l; i++)
    {
        if (s1[i] != s2[i])
        {
            istrue = false;
            break;
        }
    }
    return istrue;
}
int main()
{
    int n, x = 0;
    cin >> n;
    string s;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        if (strcm(s,"X++",3) || strcm(s, "++X",3))
            x++;
        else if(strcm(s,"X--",3) || strcm(s, "--X",3))
            x--;
    }

    cout << x <<endl;
}
