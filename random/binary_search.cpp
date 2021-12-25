#include <bits/stdc++.h>

using namespace std;

bool b_search(int arr[], int n, int t)
{
    int s = 0, e = n-1;
    bool isFound = false;
    while (s <= e)
    {
        int m = (s+e)/2;
        if (arr[m] == t)
        {
            isFound = true;
            break;
        }
        else if (arr[m] > t)
        {
            e = m -1;;
        }
        else
        {
            s = m+1;
        }
    }
    return isFound;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    cout << b_search(arr, 7,8);
}
