#include <iostream>

using namespace std;


int bigPdiv(int n)
{
    if (n == 1)
        return 1;
    int i = 2;
    while (i != n/2 + 1)
    {
        if (n % i == 0)
        {
            return n / i;
        }
        i++;
    }
    return 1;
}
int main()
{
    int t;
    int n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int ct = 0;

        while (n != 1)
        {
            if (n <= 1)
            {
                ct = 0;
                break;
            }
            else if (n == 2 || n % 2 != 0)
                n--;
            else
                n = n / (n / 2);
            ct++;
        }
        cout << ct <<endl;


    }



}

