#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;

    long long int arr[10];
    fill(arr, arr + 10, 0);

    for (char c:s) arr[c - 48] = 1;

    int max = 0;
    for (int i = 0; i < 10; i++)
        if (max < arr[i]) max = i;
    cout << max <<endl;
}
