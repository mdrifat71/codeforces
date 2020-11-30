#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >>n;
        int arr[n+1];
        for (int i = 0; i < n; i++) cin >> arr[i];

        int min_ = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= 0)
                continue;
            arr[n] = arr[i];
            int g = 0;
            for (int j = i + 1; j <=n; j++)
            {
                if (arr[i] == arr[j] && (-1 *arr[j]) !=  arr[j-1])
                {

                    g++;
                    //cout << arr[j] << " r " << arr[j-1] <<" ";
                    arr[j] = arr[j] * -1;

                }
            }


            if (i != 0)
                g++;

            if (i == 0)
                min_ = g;
            else if (g < min_)
                min_ = g;

        }
        cout << min_ <<endl;
    }
}
