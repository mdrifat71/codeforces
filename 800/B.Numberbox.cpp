#include<bits/stdc++.h>

using namespace std;

void numberBox()
{
    int m, n;
    int arr[11][11];

    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    }

    int sum = 0;

    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < n - 1; j++)
        {
            if (abs(arr[i][j]) > abs(arr[i][j+1]))
            {
                if (arr[i][j] <= 0)
                {
                    arr[i][j] *= -1;
                    arr[i][j+1] *= -1;
                }


            }
            else if (abs(arr[i][j]) < abs(arr[i][j+1]))
            {
                if (arr[i][j+1] <= 0)
                {
                    arr[i][j] *= -1;
                    arr[i][j+1] *= -1;
                }
            }
            else
            {
                if (arr[i][j] < 0 && arr[i][j+1] < 0)
                {
                    arr[i][j] *= -1;
                    arr[i][j+1] *= -1;
                }
            }
        }

        for (int j = n - 1; j > 0; j--)
        {
            if (abs(arr[i][j]) > abs(arr[i][j-1]))
            {
                if (arr[i][j] <= 0)
                {
                    arr[i][j] *= -1;
                    arr[i][j-1] *= -1;
                }


            }
            else if(abs(arr[i][j]) < abs(arr[i][j-1]))
            {
                if (arr[i][j-1] <= 0)
                {
                    arr[i][j] *= -1;
                    arr[i][j-1] *= -1;
                }
            }
            else
            {
                if (arr[i][j] < 0 && arr[i][j-1] < 0)
                {
                    arr[i][j] *= -1;
                    arr[i][j-1] *= -1;
                }
            }
        }


    }

    for (int j = 0; j < n; j++)
    {
        for(int i = 0; i < m - 1; i++)
        {
            if (abs(arr[i][j]) > abs(arr[i+1][j]))
            {
                if (arr[i][j] <= 0)
                {
                    arr[i][j] *= -1;
                    arr[i+1][j] *= -1;
                }
            }
            else if (abs(arr[i][j]) < abs(arr[i+1][j]))
            {
                if (arr[i+1][j] <= 0)
                {
                    arr[i][j] *= -1;
                    arr[i+1][j] *= -1;
                }
            }
            else
            {
                if (arr[i][j] < 0 &&  arr[i+1][j] < 0)
                {
                    arr[i][j] *= -1;
                    arr[i+1][j] *= -1;
                }

            }
        }

        for(int i = m - 1; i < 0; i--)
        {
            if (abs(arr[i][j]) > abs(arr[i-1][j]))
            {
                if (arr[i][j] <= 0)
                {
                    arr[i][j] *= -1;
                    arr[i-1][j] *= -1;
                }
            }
            else if (abs(arr[i][j]) < abs(arr[i-1][j]))
            {
                if (arr[i-1][j] <= 0)
                {
                    arr[i][j] *= -1;
                    arr[i-1][j] *= -1;
                }
            }
            else
            {
                if (arr[i][j] < 0 &&  arr[i-1][j] < 0)
                {
                    arr[i][j] *= -1;
                    arr[i-1][j] *= -1;
                }

            }
        }
    }


    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            sum += arr[i][j];
    }


    /*
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] <<" ";

        cout << endl;
    }
    */
    cout << sum <<endl;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
        numberBox();
}
