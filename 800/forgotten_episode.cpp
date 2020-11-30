#include <iostream>

using namespace std;

int main()
{
    long long int n ; cin >> n;
    long long int sum = 0;
    int tmp;
    for (int i = 1; i < n; i++)
    {
        cin >> tmp;
        sum += tmp;
    }

    cout << (n*(n+1))/2 - sum <<endl;
}
