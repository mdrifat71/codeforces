#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int m = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 1;
        int j = i+1;
        int k = i - 1;
        int preva = i;
        int prevb = i;
        while ((j != n && arr[preva] >= arr[j]) || (k != -1 && arr[prevb] >= arr[k]))
        {
            if (j != n && arr[preva] >= arr[j] )
            {
                sum++;
                preva = j;
                j++;
            }

            if ((k != -1 && arr[prevb] >= arr[k]))
            {
                sum++;
                prevb = k;
                k--;
            }

        }
        if (sum > m)
            m  = sum;

    }

    cout << m <<endl;
}

