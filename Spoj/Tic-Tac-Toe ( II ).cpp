#include <bits/stdc++.h>

using namespace std;

bool row(string s, int i, char c)
{
    int n = i+3;
    for (; i < n; i++)
    {
        if (s[i] != c)
            return false;
    }
    return true;
}

bool column(string s, int i, char c)
{
    int j  = 0;
    while (j < 3)
    {
        if (s[i] != c)
            return false;
        i+= 3;
        j++;
    }

    return true;
}
int main()
{
    while (1)
    {
        string s; cin >> s;

        if (s == "end")
            break;

        int x = 0, o = 0;

        bool xtao = false, otao = false;

        for (int i = 0; i < 9; i+=3)
        {
            if (s[i] == 'X')
                xtao = xtao == false ? row(s,i,'X') : true;
            else
                otao = otao == false ? row(s,i,'O') : true;
        }

        for (int i = 0; i < 3; i++)
        {
            if (s[i] == 'X')
            {
                xtao = xtao == false ? column(s,i,'X') : true;
            }
            else
            {
                otao = otao == false ? column(s,i,'O') : true;
            }
        }

        if (s[0] == 'X' && s[4] == 'X' && s[8] == 'X')
            xtao = true;
        else if (s[0] == 'O' && s[4] == 'O' && s[8] == 'O')
            otao = true;


        if (s[2] == 'X' && s[4] == 'X' && s[6] == 'X')
            xtao = true;
        else if (s[2] == 'O' && s[4] == 'O' && s[6] == 'O')
            otao = true;

        for (int i = 0; i < 9; i ++)
        {
            if (s[i] == 'X')
                x++;
            else if (s[i] == 'O')
                o++;
        }



        if (xtao && otao)
        {
            cout << "invalid" << endl;
        }
        else if (xtao && x == o+1)
            cout << "valid" << endl;
        else if (otao && o == x)
            cout << "valid" << endl;
        else if (x == o+1 && x + o == 9)
            cout << "valid" << endl;
        else
            cout << "invalid" << endl;

    }
}
