#include <iostream>

using namespace std;

int main()
{
    int a;
    int f;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a;
            if (a == 1)
            {
                 f = abs(2-i)+abs(2-j);
            }
        }
    }
    cout << f <<endl;
}
