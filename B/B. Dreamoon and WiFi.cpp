#include <bits/stdc++.h>

using namespace std;




#define ll long long int


int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n-1);

}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int pos1 = 0;
    int pos2 = 0;
    int notfound = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == '+')
            pos1++;
        else if (s1[i] == '-')
            pos1--;

        if(s2[i] == '+')
            pos2++;
        else if (s2[i] == '-')
            pos2--;
        else
            notfound++;
    }

    int diff = abs(pos1 - pos2);
    double P;
    double chance;
    if (diff == 0 && notfound == 0)
    {
        printf("%.12lf\n", 1.0);
        return 0;
    }


    if (diff <= notfound)
    {
        if ((diff % 2 != 0 && notfound % 2 != 0 ) || (diff % 2 == 0 && notfound % 2 == 0))
        {
            int div1 = abs(diff);
            int div2 = (notfound - diff)/2;
            div1 += div2;

            chance = (double) factorial(notfound) / (factorial(div1) * factorial(div2));
        }
        else
        {
            chance = 0;
        }
    }
    else
    {
        chance = 0;
    }

    P = chance / pow(2, notfound);
    printf("%.12lf\n", P);

}
