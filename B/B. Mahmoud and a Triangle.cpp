#include <bits/stdc++.h>

using namespace std;

int arr[100000];

int main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr+n);

    int valid = false;

    for (int i = 0; i < n-2; i++)
    {
        if (arr[i] + arr[i+1] > arr[i+2])
        {
            valid = true;
            break;
        }
    }


    if (valid == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
