#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k; cin >> n >> k;
    int prefix[n];
    int prev = 0;
    for (int i = 0; i < n; i++)
    {
        int tmp; cin >> tmp;
        prefix[i] = prev + tmp;
        prev = prefix[i];
    }

    --k;
    int i = 0, min = -1;
    int ind = 1;
    while (i + k < n)
    {
        if (min == -1)
        {
            min = prefix[i+k];
            ind = i+1;
        }
        else if (min > (prefix[i+k] - prefix[i-1]))
        {
            min = prefix[i+k] - prefix[i-1];
            ind = i+1;
        }
        i++;
    }
    cout << ind <<endl;
}
