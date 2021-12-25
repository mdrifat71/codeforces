#include <bits/stdc++.h>

using namespace std;

bool find(int * arr, int n, int v, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == v)
        {

            arr[i] = x;
            return true;
        }

        if (arr[i] > v)
            return false;
    }
    return false;
}
int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n; cin >> n;
        int * arr = new int [n+2];
        for (int i = 0; i < n+2; i++)
            cin >> arr[i];
        sort (arr, arr + n + 2);

        long long sum = 0;
        for (int i = 0; i < n; i++)
            sum += (long long) arr[i];


        if (sum != arr[n] && sum != arr[n+1])
        {
            if (sum > arr[n+1])
                cout << -1 << endl;
            else
            {

                int a = arr[n] - (arr[n+1] - sum);
                if (find(arr, n, a , arr[n]) )
                {
                    for (int i = 0; i < n; i++)
                    {
                        cout << arr[i] << " ";
                    }
                    cout << endl;
                }
                else
                    cout << -1 << endl;
            }
        }
        else
        {
            for (int i= 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
}
