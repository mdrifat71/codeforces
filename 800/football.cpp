#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;

    int pol = 1;
    int prev = 0;
    int l = str.length();

    for (int i = 1; i <l; i++)
    {
        if(str[i] == str[prev])
            pol++;
        else
        {
            if (pol >= 7)
                break;

            prev = i;
            pol = 1;
        }
    }

    if (pol >= 7)
        cout << "YES" <<endl;
    else
        cout << "NO" <<endl;
}
