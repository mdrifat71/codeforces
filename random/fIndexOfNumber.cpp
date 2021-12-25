#include <bits/stdc++.h>

using namespace std;

int fIndex(int arr[], int n, int x)
{

    if (n == 0)
        return -1;
    if (arr[0] == x)
        return 0;
    else
    {
        int sm = fIndex (arr + 1, --n, x);
        if (sm == -1)
            return -1;
        return sm + 1;
    }
}

int lIndex(int arr[], int n, int x)
{
    if (n == 0)
        return -1;

    if (arr[n-1] == x)
        return n-1;
    else
        return lIndex(arr, --n, x);
}


int allIndex (int arr[], int n, int x, int output[])
{

    if (n == 0)
        return 0;

    int size = allIndex(arr+1, --n, x, output);
    for (int i = 0; i < size; i++)
        output[i]++;

    if(arr[0] == x)
    {
        if (size == 0)
            output[0] = 0;
        else
        {
            for (int i = size; i > 0; i--)
            {
                output[i] = output[i-1];
            }
            output[0] = 0;
        }

        size++;
    }
    return size;




}

int allIndex2(int arr[], int n, int x, int output[])
{
    if (n == 0)
        return 0;


    int size = allIndex2(arr, n-1, x, output);

    if (arr[n-1] == x)
    {

        output[size] = n-1;
        size++;
    }
    return size;
}
int main()
{
    int arr[] = {5,5,3,4,5,6,5,6,7,5};
    int output[100];
    int size = allIndex2 (arr, 10, 5, output);
    cout << size << endl;
    for (int i = 0; i < size; i++)
        cout << output[i] << " ";
}
