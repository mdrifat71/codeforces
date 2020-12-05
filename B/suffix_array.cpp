#include <bits/stdc++.h>

using namespace std;

void eq(int arr[], int n, int k)
{
    int step = 0;
    for (int i = 0; i < n; i++)
    {
        int diff = k - arr[i];
        arr[i] += diff;
        step += abs(diff);
    }

    cout << step <<endl;
}

int main()
{
    int arr[] = {3,4,5,6,7};
    eq(arr, 5,6);
    for (int i:arr) cout << i <<" ";
}
