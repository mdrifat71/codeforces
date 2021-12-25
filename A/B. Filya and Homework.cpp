#include <bits/stdc++.h>

using namespace std;

bool isExist(int arr[], int n, int x)
{
    for(int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return true;
    }
    return false;
}

int  main()
{
    int n; cin >> n;
    int arr[n], tmp[4];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (!isExist (tmp, j, arr[i]) )
        {

            tmp[j] = arr[i];
            j++;
            if (j > 3)
                break;
        }
    }

    if (j > 3)
    {
        cout << "NO" << endl;
    }
    else if (j == 3)
    {
        sort(tmp, tmp+j);
        if (abs(tmp[0] - tmp[1]) == abs(tmp[1] - tmp[2]))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "YES" << endl;
    }
}
