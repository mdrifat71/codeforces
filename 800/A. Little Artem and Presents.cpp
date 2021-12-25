#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;

    int t = 2*(n/3) + (n % 3 == 0 ? 0 : 1);
    cout << t <<endl;
}
