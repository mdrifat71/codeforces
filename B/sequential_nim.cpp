#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >>n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];

        int w = -1;
        int i = 0;
        while (arr[i] == 1 && i != n - 1)
        {
            i++;
            w *= -1;
        }

        if (w == -1)
            cout << "First" <<endl;
        else
            cout << "Second" <<endl;
    }
}
