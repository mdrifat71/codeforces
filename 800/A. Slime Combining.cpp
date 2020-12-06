#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int arr[n];
    int k = 0;
    fill(arr, arr+n, 0);
    for (int i = 0; i < n; i++)
    {
        arr[k] = 1;
        if (k != 0 && arr[k-1] == arr[k])
        {

            while (arr[k] == arr[k-1])
            {
                arr[k-1] =  arr[k-1]+1;
                arr[k] = 0;
                k--;
            }
        }
        k++;
    }

    for (int i = 0; i < k; i++)
        cout << arr[i] << " ";
}
