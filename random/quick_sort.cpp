#include <bits/stdc++.h>

using namespace std;


int partition(int s, int e, int arr[])
{
    int pivot = arr[e];
    int ph = s;

    for (int i = s; i <= e; i++)
    {
        if (arr[i] < pivot)
        {
            swap(arr[ph], arr[i]);
            ph++;
        }
    }
    swap(arr[ph], arr[e]);
    return ph;
}

int r_partition(int s, int e, int arr[])
{
    int pivot = s;
    for (int i = s+1; i <= e; i++)
    {
        if (arr[pivot] < arr[i])
        {
            if (i == pivot + 1)
            {
                swap(arr[i], arr[pivot]);
                pivot++;
            }
            else
            {
                swap(arr[pivot], arr[pivot+1]);
                swap(arr[pivot], arr[i]);
                pivot++;
            }
        }
    }
    return pivot;
}

int t_partition(int s, int e, int arr[])
{
    int pivot = arr[e];
    int i = s-1;

    for (int j = s; j <= e; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[i+1], arr[e]);
    return i+1;
}
void q_sort(int s, int e, int arr[])
{

    if (s < e)
    {
        int pi = t_partition(s,e,arr);
        cout << pi << endl;
        q_sort(s, pi-1, arr);
        q_sort(pi+1, e, arr);

    }

}
int main()
{
    int arr[] = {3,5,4,1,5,7,2,6,8};
    q_sort(0,8,arr);
    for (int i : arr)
        cout << i << " ";
}
