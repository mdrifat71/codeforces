#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        long long int arr[n];
        for (int i = 0; i < n ; i++)
            cin >> arr[i];

        sort(arr, arr + n);

        long long int m = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] * (n - i) > m)
                m = arr[i] * (n - i);

        }
        cout << m <<endl;
    }
    return 0;
}
