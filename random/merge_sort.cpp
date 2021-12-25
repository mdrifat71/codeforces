#include <bits/stdc++.h>

using namespace std;


void merge(int s, int m, int e,int arr[])
{
    int tmp[e+1];
    int i = s;
    int j = m+1;

    int k = s;

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

    for (int i = s; i <= e; i++)
    {
        arr[i] = tmp[i];
    }
}

void m_sort(int s, int e, int arr[])
{
    if (s < e)
    {
        int m = (s+e)/2;
        m_sort(s, m, arr);
        m_sort(m+1, e , arr);
        merge(s, m, e, arr);
    }
}
int main()
{
    int arr[] = {3,5,4,1,5,7,2,6,8};
    m_sort(0,8,arr);
    for (int i : arr)
        cout << i << " ";
}
