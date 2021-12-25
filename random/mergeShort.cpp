#include <bits/stdc++.h>

using namespace std;
int mem[100];
void merge(int arr[], int s, int m, int e)
{
    int i = s;
    int j = m+1;
    int k = 0;
    for (int i = s; i <= e; i++)
        cout << arr[i] << " ";
    while (i <= m && j <= e)
    {
        if (arr[i] < arr[j])
        {
            mem[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            mem[k] = arr[j];
            j++;
            k++;
        }


    }

    while(i <= m)
    {
        arr[k] = arr[i];
        i++;
        k++;
    }

    while (j <= e)
    {
        arr[k] = arr[j];
        j++;
        k++;
    }

    int x = 0;
    for (int i = s; i <= e; i++)
    {
        arr[i] = mem[x];
        x++;
    }
    cout << endl;
}
void sort(int arr[], int s, int e)
{
    if (s >= e)
        return ;
    int m = (s + e ) /2 ;

    sort (arr, s, m);
    sort(arr, m+1, e);
    merge(arr, s, m, e);

}
int main()
{
    int arr[] = {1,4,2,3,5,4,1};
    sort(arr, 0,6);
    for (int i = 0; i < 7; i++)
        cout << arr[i] << " ";
}
