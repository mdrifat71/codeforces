#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    bool isTrue = false;
    int k = n;
    while (k != 0)
    {
        if (k % 10 == 4 || k % 10 == 7)
            isTrue = true;
        else
        {
            isTrue = false;
            break;
        }
        k /= 10;
    }

    if (isTrue)
    {
        cout << "YES" <<endl;
            return 0;
    }

    int L1 = 4*pow(10, 0);
    int L2 = 7*pow(10,0);
    int i = 1;
    while(L1 < n && L2 < n)
    {
        if (n % L1 == 0 || n % L2 == 0)
        {
            cout << "YES" <<endl;
            return 0;
        }

          L1 = 4*pow(10, i) + 7;
          L2 = 7*pow(10, i) + 4;
          i++;
    }

    cout << "NO" <<endl;
}
