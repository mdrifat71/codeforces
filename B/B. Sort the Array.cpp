#include <bits/stdc++.h>

using namespace std;

long long int arr[100000];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int k = 0, i = 1;
    int start = 1,end = 1;

    while (i != n)
    {
        if (arr[i] < arr[i-1])
        {
            k++;
            if (k > 1)
                break;

            start = i - 1;
            while (i != n && arr[i] < arr[i-1])
                i++;

            end = i - 1;
            swap(arr[end], arr[start]);

            if (start != 0 && arr[start] < arr[start-1])
            {
                k++;
                break;
            }

            //making one based index
            start++;
            end++;
        }
        else
            i++;
    }


    if (k > 1)
        cout << "no" <<endl;
    else
    {
        cout << "yes" << endl;
        cout << start << " " << end << endl;
    }
}
