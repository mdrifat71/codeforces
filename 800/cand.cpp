#include <iostream>

using namespace std;

int main()
{
    int n, f; cin >> n >> f;
    int c = n / f, e = n % f;

    for (int i = 1; i <= f; i++)
    {
        if (e != 0)
        {
            cout << c + 1 << " ";
            e--;
        }
        else
            cout << c << " ";
    }
    cout << endl;
    return 0;
}
