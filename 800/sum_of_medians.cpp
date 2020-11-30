#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        int arr[n*k+1];
        for (int i = 0; i < n*k; i++)
            cin >> arr[i];

        int med = round(n/2)-1;

        int total = 0;
        for(int i = 0; i < n*k; i+= k)
        {
            total += arr[med + i];
        }

        cout << total <<endl;
    }
}
