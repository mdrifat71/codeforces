#include <bits/stdc++.h>

using namespace std;

int ind(char x, char arr[], int n)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return i;

    return 0;
}

int main()
{
    string str[3];
    for (int i = 0; i < 3; i++)
        cin >> str[i];

    int arr[3]; fill (arr,arr+3, 0);
    char c[] = {'A', 'B', 'C'};


    for (int i = 0; i < 3; i++)
    {
        if (str[i][1] == '>')
            arr[ind(str[i][0], c, 3)]++;
        else
            arr[ind(str[i][2], c, 3)]++;
    }


    if (arr[0] == arr[1] && arr[1] == arr[2])
    {
        cout << "Impossible" <<endl;
        return 0;
    }

    char x[3];
    for(int i = 0; i < 3; i++)
    {
        x[arr[i]] = c[i];
    }

    for (int i = 0; i < 3; i++)
        cout << x[i];
    cout << endl;
}
