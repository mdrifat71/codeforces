#include <bits/stdc++.h>

using namespace std;

int lcs (char * s1, char * s2, int l1, int l2)
{
    if (l1 == 0 || l2 == 0)
        return 0;
    //recursion
    if (s1[0] == s2[0])
        return 1 + lcs(s1+1, s2+1, l1-1, l2-1);

    if (s1[0] != s2[0])
    {
        int x =  lcs(s1+1, s2, l1-1, l2);
        int y =  lcs(s1, s2+1, l1, l2-1);
        int z =  lcs(s1+1, s2+1, l1-1, l2-1);
        return max(x, max(y,z));
    }

}
int main()
{
    char * s1 = new char[2000];
    char * s2 = new char[2000];
    int l1, l2;
    cin >> l1 >> l2;
    cin >> s1 >> s2;
    cout << lcs(s1, s2, l1,l2);
}
