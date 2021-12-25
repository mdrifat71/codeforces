#include <bits/stdc++.h>

using namespace std;



void merge (int arr[], int s, int e)
{
    int m = (s + e) / 2;
    int tmp[100];
    int k = 0;

    int i = s;
    int j = m + 1;

    while (i <= m && j <= e)
    {
        if (arr[i] < arr[j])
        {
            tmp[k] = arr[i];
            i++;
        }
        else
        {
            tmp[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= m)
    {
        tmp[k] = arr[i];
        i++;
        k++;
    }


    while (j <= e)
    {
        tmp[k] = arr[j];
        j++;
        k++;
    }

    for (int i = 0; i < k; i++)
    {
        arr[s] = tmp[i];
        s++;
    }


}
void sort (int arr[], int s, int e)
{
    if (s >= e)
        return;
    int m = (s + e) / 2;

    sort (arr, s, m);
    sort (arr, m+1, e);
    merge(arr, s, e);

}

int main()
{
    int arr[] = {5,6,2,1,4,3,8,0};
    sort (arr, 0,7);
    for (int i = 0; i < 8; i++)
        cout << arr[i] << " ";
}
