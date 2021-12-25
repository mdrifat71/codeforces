#include <bits/stdc++.h>

using namespace std;

int rest(int arr[], int prev, int j, int n)
{
    vector <pair <int , int> > option;
    option.push_back(make_pair(0, 0));
    option.push_back (make_pair(0, 1));
    option.push_back(make_pair(1, 0));
    option.push_back (make_pair(1, 1));


    if (j == n) return 0;

    cout << 1 << endl;
    int i = arr[j];
    if (prev == 0)
    {
        if (option[i].second == 0)
            return 1 + rest(arr, -1, ++j, n);
        else
            return rest (arr, 1, ++j, n);
    }
    else if (prev == 1)
    {
       if (option[i].first == 0)
            return 1 + rest(arr, -1, ++j, n);
        else
            return rest (arr, 0, ++j, n);
    }
    else if (prev == -1)
    {
        if (option[i].first == 0 && option[i].second == 0)
        {
            return  1 + rest(arr, -1, ++j, n);
        }
        else if (option[i].first == 0)
        {
             return rest(arr, 1, ++j, n);
        }
        else if (option[i].second == 0)
        {
             return  rest(arr, 0, ++j, n);
        }
        else
        {
            return min (rest(arr, 0, ++j, n), rest(arr, 1, ++j, n));
        }
    }
}

int main()
{
    int n; cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    cout << rest(arr, -1, 0, n) << endl;
}
