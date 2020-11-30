#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[m+1];
    vector <int> ex;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        if (l > r)
        {
            for (int i = r; i <= l; i++)
                arr[i] = 1;
        }
        else
        {
            for  (int i = l; i <= r; i++)
                arr[i] = 1;
        }
    }

    int k = 0;
    for (int i = 1; i <= m; i++)
    {
        if (arr[i] != 1)
        {
            ex.push_back(i);
            k++;
        }
    }
    cout << k <<endl;
    if (k > 0)
    {
        for (int i = 0; i < k; i++)
            cout << ex[i] <<" ";
        cout << endl;
    }
}
