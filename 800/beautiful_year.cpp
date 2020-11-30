#include <bits/stdc++.h>

using namespace std;

bool isDist(int n)
{
    int arr[10];
    fill(arr, arr+10, 0);
    while(n != 0)
    {
        arr[n%10] += 1;
        n = n / 10;
    }

    for (int i = 0; i < 10; i++)
        if (arr[i] > 1) return false;
    return true;
}
int main()
{
    int n; cin >> n;

    while (!isDist(n+1))
        n++;
    cout << n + 1<<endl;
}
