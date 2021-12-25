#include <bits/stdc++.h>

using namespace std;

int get_pivot(int l, int r, int * arr)
{
    int pivot = l;

    int j = l;
    for (int i =  l+1; i <= r; i++)
    {
        if (arr[i] < arr[pivot])
        {
            j++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[j], arr[pivot]);
    return j;
}
int main()
{
    int n; cin >> n;
    int * arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int k; cin >> k;

    int l = 0;
    int r = n-1;
    k--;
    while (l <= r)
    {
        int pivot = get_pivot(l, r, arr);
    //cout << pivot << endl;
        if (k == pivot)
        {
            cout << arr[k] << endl;
            break;
        }

        if (pivot > k)
        {
            r = pivot - 1;
        }
        else
            l = pivot + 1;
    }
}
