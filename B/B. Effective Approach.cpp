#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int arr[100000];
    int tmp[100000];


    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int m; cin >> m;
    long long int p = 0, v = 0;




    for (int i = 0; i < n; i++)
    {
        tmp[arr[i]] = i+1;
    }
    while (m--)
    {
        int x;
        scanf("%d", &x);

        int c = tmp[x];
        p += c;
        v += n - c + 1;

    }

    cout << p << " " << v <<endl;
}
