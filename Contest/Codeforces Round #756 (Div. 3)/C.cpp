#include <bits/stdc++.h>
#define ll long long

using namespace std;

int maxVal(int * arr, int n)
{
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx)
            mx = arr[i];
    }
    return mx;
}
void solve()
{
    int n; cin >> n;
    int * arr = new int[n];
    for (int i= 0; i < n; i++)
        cin >> arr[i];
    int i = 0, j = n-1;
    int mx = maxVal(arr, n);

    if (arr[0] != mx && arr[n-1] != mx)
    {
        cout << -1 << endl;
        return;
    }




    int idx = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i-1])
            idx++;
        else
            break;
    }

    for (int i = idx; i >= 0; i--)
    {
        if (arr[i] != mx)
            cout << arr[i] << " ";
    }
    cout << mx << " ";

 //  cout << idx << endl;
    for (int i = n-1; i > idx; i--)
    {
        if (arr[i] != mx)
            cout << arr[i] << " ";
    }
    cout << endl;


}
int main()
{
    int t; scanf("%d", &t);
    while(t--)
    {
        solve();
    }
}

