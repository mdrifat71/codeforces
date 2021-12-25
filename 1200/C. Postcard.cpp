#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    int k; cin >> k;
    int c = 0, sn = 0, l = 0;
    string ns = "";

    if (s[0] != '*' && s[0] != '?')
    {
        ns += s[0];
        l++;
    }

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == '?' && s[i-1] != '*' && s[i-1] != '?')
            c++;
        else if (s[i] == '*' && s[i-1] != '?' && s[i-1] != '*')
            sn++;
        else if (s[i] != '*' && s[i] != '?')
            l++;

    }


    cout << sn << ' ' << c << " " << l << endl;
    int req = k - l;
    if (req == 0)
    {
        for (int i = 1; i < s.size(); i++)
            if (s[i] != '?' && s[i] != '*')
                ns += s[i];

        cout << ns << endl;
        return 0;
    }

    //////////////////

    if (req > 0)
    {
        if (sn < 1)
        {
            cout << "Impossible" << endl;
            return 0;
        }

        bool added = false;
        for (int i = 1; i < s.size(); i++)
        {
            if (!added && s[i] == '*'  && s[i-1] != '*' && s[i-1] != '?')
            {
                added = true;
                while (req != 0)
                {
                    ns += s[i-1];
                    req--;
                }
            }
            else if (s[i] != '*' && s[i] != '?')
                ns += s[i];
        }

        cout << ns << endl;
        return 0;

    }

    /////////////////////

   req = abs(req);
   if (req <= sn + c)
    {

        ns = "";
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] != '*' && s[i] != '?')
            {

                if (req == 0 || i == s.size()-1 || (s[i+1] != '*' && s[i+1] != '?'))
                {
                    ns += s[i];

                }
                else if (req != 0)
                    req--;
            }
        }

        cout << ns << endl;
        return 0;
    }

    cout << "Impossible" << endl;
    return 0;
}
