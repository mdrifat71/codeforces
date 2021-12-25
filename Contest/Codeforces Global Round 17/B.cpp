#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n;
int arr[1000000];

bool isPal(int * arr, int n)
{
    int l = 0, r = n-1;
    while (l <  r)
    {
        if(arr[l] != arr[r])
            return false;
        l++;
        r--;
    }
    return true;
}
void solve()
{
    scanf("%d", &n);
    for (int i = 0; i< n;i++)
        cin >> arr[i];

    int a = -1, b = -1;
    int l = 0, r = n-1;
    while (l < r)
    {
        if (arr[l] != arr[r])
        {
            a = arr[l], b = arr[r];
            break;
        }
        l++;
        r--;
    }

    if (a == -1)
    {
        cout << "YES" << endl;
        return;
    }

    int * tmp = new int[n];
    int * tmp1 = new int[n];

    int j = 0, k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == a)
        {
            tmp1[k] = arr[i];
            k++;
        }
        else if (arr[i] == b)
        {
            tmp[j] = arr[i];
            j++;
        }
        else
        {
            tmp1[k] = arr[i];
            tmp[j] = arr[i];
            k++;
            j++;
        }
    }


    if (isPal(tmp1, k) || isPal(tmp, j))
        cout<< "YES" << endl;
    else
        cout << "NO" << endl;

}
int main()
{
    int t; scanf("%d", &t);

    while(t--)
    {
        solve();
    }
}

