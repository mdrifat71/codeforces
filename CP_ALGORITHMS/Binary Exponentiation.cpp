#include <bits/stdc++.h>

using namespace std;


int expo(int a, int n)
{
    cout << "step" << endl;
    if (n == 0 || a == 1)
        return 1;

    int x = expo(a, n/2);

    if (n % 2 == 0)
        return x * x;
    else
        return x * x * a;

}
int main()
{
    int a, n; cin >> a >> n;
    cout << expo(a, n);
}
