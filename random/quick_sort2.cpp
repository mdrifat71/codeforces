#include <bits/stdc++.h>

using namespace std;


int partition(int arr[], int s, int e)
{
    int pvot = e;

    int i = s;
    for (int j = s; j < e; j++)
    {
        if (arr[j] < arr[pvot])
        {
            swap(arr[j], arr[i]);
            i++;
        }
    }
    swap(arr[i], arr[pvot]);
    return i;
}

int partition2(int arr[], int s, int e)
{
    int pvot = arr[s];

    int count = s;
    for (int i = s+1; i <= e; i++)
    {
        if (arr[i] <= pvot)
            count++;
    }

    swap(arr[s], arr[count]);

    int i = s;
    int j = count+1;

    while (i < count && j > count)
    {
        if (arr[i] <= pvot)
        {
            i++;
        }
        else
        {
            if (arr[j] >pvot)
            {
                j++;
            }
            else
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    cout << count << " c " << endl;
    return count;

}
void sort(int arr[], int s, int e)
{
    if (s < e)
    {
        int pvot = partition2(arr, s , e);
        sort (arr, s, pvot-1);
        sort (arr, pvot+1, e);
    }
}

int main()
{

    int arr[] = {5,6,2,1,4,3,3,0};
            //    3,6,2,1,4,3,5,0

              //  0,1,2,3,3,4,5,6

    sort (arr, 0,7);
    for (int i = 0; i < 8; i++)
        cout << arr[i] << " ";

}
