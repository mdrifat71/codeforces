#include <bits/stdc++.h>

using namespace std;


long long int  * arr ;
long long int fib(int n)
{
    if (n == 0)
    {
        arr[0] = 0;
        return 0;
    }
    if (n == 1)
    {
        arr[1] = 1;
        return 1;
    }


    long long int big;
    if (arr[n] == 0)
    {
        big =  fib(n-1) + fib(n-2);
        arr[n] = big;
    }
    else
        big = arr[n];

    return big;
}

int main()
{

    int n;
    cin >> n;
    arr = new long long int[n+1];
    fill(arr, arr+n+1, 0);
    cout << fib(n) << endl;
    for (int i = 0; i <= n; i++)
        cout << arr[i] << " ";
}
