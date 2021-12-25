#include <bits/stdc++.h>

using namespace std;

int len(char s[])
{
    if (s[0] == '\0')
        return 0;

    return 1 + len(s+1);
}

char removeX(char s[])
{
    if (s[0] == '\0')
        return '\0';


    if (s[0] != 'x')
        return removeX(s+1);
    else
    {
        for (int i = 0; s[i] != NULL; i++)
            s[i] = s[i+1];
    }
    return removeX(s);

}


void consDup(char s[])
{
    if (s[0] == NULL)
        return ;

    if (s[0] == s[1])
    {
        for (int i = 0; s[i] != NULL; i++)
        {
            s[i]= s[i+1];
        }
        consDup(s);
    }
    else
        consDup (s+1);
}
int main()
{

    char s[100];
    cin >> s;
    consDup(s);
    cout << s << endl;

    // cout << len (s) ;
}
