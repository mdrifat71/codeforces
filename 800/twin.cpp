#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n+1];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr + n);

    int c_t = 0;
    int c_v = 0;
    for (int i = n-1; i < n; i--)
    {
        if (c_v > sum)
            break;
        c_v += arr[i];
        c_t++;
        sum -= arr[i];
    }

    cout << c_t <<endl;
}
