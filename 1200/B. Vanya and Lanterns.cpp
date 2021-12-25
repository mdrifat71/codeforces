#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n,  l; cin >> n >> l;
    double * arr = new double[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr+n);

    double d = fmax(arr[0], l - arr[n-1] );

    for (int i = 1; i < n; i++)
    {

        d = fmax(d, (arr[i] - arr[i-1]) / 2);
    }

    printf("%lf", d);
    delete arr;


}
