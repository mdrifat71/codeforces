#include <bits/stdc++.h>

using namespace std;

int sum (int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < 0)
        {
            if (k != 0)
            {
                arr[i] = arr[i] * -1;
                k--;
            }
        }

    }



    if (k % 2 != 0)
    {
        sort (arr, arr+n);
        arr[0] = arr[0] * -1;

    }
    int s = sum (arr,  n);
    cout << s << endl;





}
