#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n; cin >> n;
    int * arr = new int [n];
    string color;

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> color;

    int *red = new int [n];
    int *blue = new int [n];

    int a = 0;
    int b = 0;


    for (int i = 0; i < n; i++)
    {
        if (color[i] == 'R')
        {
            red[a] = arr[i];
            a++;
        }
        else
        {
            blue[b] = arr[i];
            b++;
        }
    }

    sort(red, red + a);
    sort (blue, blue + b);

    //cout << a << " " << b << endl;
    for (int i = 0; i < b; i++)
    {

        if (blue[i] < i + 1)
        {
            cout << "NO" << endl;
            return;
        }
    }

    for (int i = 0; i < a; i++)
    {
        //cout << red[i] << " " << i+1+a << endl;
        if (red[i] > i+1+b)
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;

}
int main()
{
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
}
