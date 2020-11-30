#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,m; cin >> n >> m;
    vector <int> x, y;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            char tmp;
            cin >> tmp;
            if (tmp == '*')
            {
                x.push_back(i+1);
                y.push_back(j+1);
            }
        }
    }

    sort(x.begin(), x.end() );
    sort(y.begin(), y.end());

    if (x[0] == x[1])
        cout << x[2] << " ";
    else
        cout << x[0] << " ";

    if (y[0] == y[1])
        cout << y[2] <<endl;
    else
        cout << y[0] <<endl;

}
