#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int vk = arr[k-1];


    int t = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= vk && arr[i] > 0)
            t++;
    }
    cout << t << endl;
}
