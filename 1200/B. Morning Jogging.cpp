#include <bits/stdc++.h>

using namespace std;

int get_minrow(int ** arr, vector < pair <int, int> > minmax, int n)
{

    int min = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i][minmax[i].first] < arr[min][minmax[min].first] )
            min = i;
    }
    return min;
}
vector <pair <int, int> > get_minmax(int ** arr, int j, int n, int m)
{
    vector <pair <int, int> > minmax;
    for (int i = 0; i < n; i++)
    {
        int min = j;
        int max = j;

        for (int x = j; x < m; x++)
        {
            if (arr[i][min] > arr[i][x])
                min = x;
            if (arr[i][x] > arr[i][max])
                max = x;
        }

        minmax.push_back(make_pair(min, max));
    }
    return minmax;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m ; cin >> n >>m;

        int* *arr = new int* [n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = new int[m];
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        }



        for(int j = 0; j < m; j++)
        {

            vector <pair <int , int>> minmax = get_minmax(arr, j,  n,  m);
            int min_i = get_minrow(arr, minmax, n);
           // cout << min_i << " min i " << endl;
            for (int i = 0; i < n; i++)
            {
               // cout << minmax[i].first << " " << minmax[i].second << " minmax " << endl ;
                if (i == min_i)
                {
                    swap(arr[i][j], arr[i][minmax[i].first]);
                }
                else
                {
                    swap(arr[i][j], arr[i][minmax[i].second]);
                }
            }


        }


        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cout << arr[i][j] << " ";
            cout << endl;
        }



    }
}
