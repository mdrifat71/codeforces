#include <bits/stdc++.h>

using namespace std;

bool isSorted(int arr[], int n)
{
    if (n == 1 || n == 0)
        return true;

    if (arr[0] > arr[1])
        return false;

    return isSorted (arr+1,--n);

}

int main()
{
    int arr[] = {1,2,8,4,5};
    cout << isSorted(arr, 5);
}
