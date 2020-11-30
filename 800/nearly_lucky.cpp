#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int lcount = 0;


    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
            lcount++;

        n = n  / 10;
    }

    if (lcount == 4 || lcount == 7)
        cout << "YES" <<endl;
    else
        cout << "NO" <<endl;
}
