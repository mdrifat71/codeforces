#include <bits/stdc++.h>

using namespace std;

bool isSorted(int * arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i-1])
            return false;
    }
    return true;
}

void adj_swap(int * arr, int n)
{
    for (int i = 0; i < n - 1; i+=2 )
        swap(arr[i], arr[i+1]);
}

void com_swap(int * arr, int n)
{
    for (int i = 0; i < n/2; i++)
        swap(arr[i], arr[i + n/2]);
}
int main()
{
    int n; cin >> n;
    n = n * 2;
    int * arr = new int[n];
    int * arr2 = new int[n];

    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
        arr2[i] = arr[i];
    }

    int step = 0;
    int x;

    if ((n/2) % 2 == 0)
        x  = 4;
    else
        x = n;

    for (int i = 1; i <= x; i++)
    {
        if (isSorted(arr, n))
            break;
        if (i % 2 == 1)
            adj_swap(arr, n);
        else
            com_swap(arr, n);
        step++;
    }
    if (!isSorted(arr, n))
        step = -1;



    int step2 = 0;
    for (int i = 1; i <= x ; i++)
    {
        if (isSorted(arr2, n))
            break;

        if (i % 2 == 1)
            com_swap(arr2, n);
        else
            adj_swap(arr2, n);

        step2++;
    }

    if (!isSorted(arr2, n))
        step2 = -1;

    if (step != -1 && step2 != -1)
        cout << min(step2, step);
    else if (step != -1)
        cout << step << endl;
    else if (step2 != -1)
        cout << step2 << endl;
    else
        cout << -1 << endl;

    delete [] arr;
}
