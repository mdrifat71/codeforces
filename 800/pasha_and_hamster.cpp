#include <iostream>

using namespace std;

int main()
{
    int n, a, b ;cin >> n >> a >> b;
    int arr[n+1], al[a], bl[b];
    for (int i = 0; i < a; i++) cin >> al[i];
    for (int i = 0; i < b; i++) cin >> bl[i];


    for (int i = 0; i < n; i++)
    {
        if (i < a) arr[al[i]] = 1;
        if (i < b) arr[bl[i]] = 2;
    }


    for (int i = 1; i <= n; i++)
    {
        if (arr[i] != NULL)
            cout << arr[i] << " ";
    }
    cout <<endl;

    return 0;

}
