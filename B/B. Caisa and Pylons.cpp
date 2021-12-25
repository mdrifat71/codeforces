#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int e = 0;
    int a = 0;
    int prev = 0;
    for (int i = 0; i < n; i++)
    {

        /*
        ===========solution 1============

        if (prev - arr[i] < 0)
        {
            if (abs (prev - arr[i]) > e)
            {
                a += abs(prev - arr[i]) - e;
                e = 0;
            }
            else
                e += prev - arr[i];
        }
        else
        {
            e += prev - arr[i];
        }
        prev = arr[i];
        =================================
        */

        //solution 2
        //===============
        e += prev - arr[i];
        if (e < 0)
        {
            a += abs(e);
            e = 0;
        }
        prev = arr[i];
    }
    cout << a <<endl;
}
