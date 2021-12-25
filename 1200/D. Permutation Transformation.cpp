#include <bits/stdc++.h>
using namespace std;
int arr[101];
int output[101];

int getMaxIdx(int arr[], int l, int r)
{
    int mx = l;
    while(l <= r)
    {
        if (arr[l] > arr[mx])
            mx = l;
        l++;
    }
    return mx;
}
void getOutput(int arr[], int l, int r, int output[], int prev)
{

    if (l > r)
        return;
    if (l == r)
    {
        output[l] = prev+1;
        return;
    }
    int idx = getMaxIdx(arr, l, r);
    prev++;
    output[idx] = prev;
    getOutput(arr, l, idx-1, output, prev);
    getOutput(arr, idx+1, r, output, prev);
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        for (int i= 0; i < n;i++)
            cin >> arr[i];

        int l = 0, r = n-1;
        getOutput(arr, l, r, output, -1);
        for (int i= 0; i < n;i++)
            cout << output[i] << " ";
        cout << endl;
    }
}
