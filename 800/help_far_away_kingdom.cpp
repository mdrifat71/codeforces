#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    int l = s.length();

    int bdot = 0;
    for (int i = 0; i < l; i++)
    {
        if (s[i] == '.')
        {
            bdot = --i;
            break;
        }
    }


    if (s[bdot] == '9')
        cout << "GOTO Vasilisa." <<'\n';
    else
    {
        if (s[bdot + 2] <= 52)
        {
            for (int i = 0; i <=bdot; i++)
            {
                cout << s[i];
            }
            cout <<'\n';
        }
        else
        {
            s[bdot] += 1;
            for(int i = 0; i <= bdot; i++)
                cout << s[i];
            cout << endl;

        }
    }

}
