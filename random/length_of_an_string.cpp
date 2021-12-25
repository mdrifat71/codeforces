#include <bits/stdc++.h>

using namespace std;

int len (char s[])
{
    if (s[0] == '\0')
        return 0;

    return 1 + len(s+1);
}


void replace (char s[], char r)
{
    if (s[0] == '\0')
        return;
    if (s[0] == r)
    {
        int i = 0;
        while (s[i] != '\0')
        {
            s[i] = s[i+1];
            i++;
        }
        return replace(s, r);
    }
    return replace(s+1, r);
}

void removeCons (char s[])
{
    if (s[0] == '\0')
        return;

    if (s[0] == s[1])
    {
        int i = 0;
        while (s[i] != '\0')
        {
            s[i] = s[i+1];
            i++;
        }
        return removeCons(s);
    }
    return removeCons(s+1);
}
int main()
{
    char arr[] = "aaaarriffffaaaaaaattttaaa";
    removeCons(arr);
    cout << arr;



}
