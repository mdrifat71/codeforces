#include <bits/stdc++.h>

using namespace std;
/*

X.O
.XO
X.X

O.X
XOX
X.O

*/
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int x = 0, o = 0;
        char arr[3][3];
        bool otao = false;
        bool xtao = false;

        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cin >> arr[i][j];


        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (arr[i][j] == 'O')
                {
                    o++;
                    bool rval = true;
                    bool cval = true;
                    bool d1val = true;
                    bool d2val = true;
                    for (int a = 0; a < 3; a++)
                    {
                        if (arr[a][j] != 'O')
                            rval = false;
                        if (arr[i][a] != 'O')
                            cval = false;
                    }

                    for (int a = 0, b = 0; a < 3; a++,b++)
                    {
                        if (arr[a][b] != 'O')
                            d1val = false;
                    }

                    for (int a = 2, b = 2; a >= 0; a--, b--)
                    {
                        if (arr[a][b] != 'O')
                            d2val = false;
                    }

                    if (rval || cval || d1val || d2val)
                        otao = true;


                }
                else if (arr[i][j] == 'X')
                {
                    x++;
                    bool rval = true;
                    bool cval = true;
                    bool d1val = true;
                    bool d2val = true;

                    for (int a = 0; a < 3; a++)
                    {
                        if (arr[a][j] != 'X')
                            rval = false;
                        if (arr[i][a] != 'X')
                            cval = false;
                    }

                    for (int a = 0, b = 0; a < 3; a++,b++)
                    {
                        if (arr[a][b] != 'X')
                            d1val = false;
                    }

                    for (int a = 2, b = 2; a >= 0; a--, b--)
                    {
                        if (arr[a][b] != 'X')
                            d2val = false;
                    }
                    if (rval || cval || d1val || d2val)
                        xtao = true;

                }
            }
        }

        if (o > x)
            cout << "no" << endl;
        else if (x == o+1)
        {
            if (otao == false)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
        else if (x == o)
        {
            if (xtao == false)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
        else
            cout << "no" << endl;
    }
}
