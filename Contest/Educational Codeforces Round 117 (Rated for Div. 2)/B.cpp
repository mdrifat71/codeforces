
#include <bits/stdc++.h>

using namespace std;

#define ll long long
int arr[102];
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, a, b;
        scanf("%d%d%d", &n, &a, &b);

        for (int i = 1; i <= n; i++)
            arr[i] = i;
        int d = n/2;

        if (a <= d && b > d)
            swap(arr[a], arr[b]);
        else if (a != d+1 || b != d)
        {
            cout << -1 << endl;
            continue;
        }

        for (int i = n; i>=1; i--)
            cout << arr[i] << " ";
        cout << endl;



    }
}
