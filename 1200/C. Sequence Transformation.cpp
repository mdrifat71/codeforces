#include <bits/stdc++.h>
using namespace std;
const int MAX = 2*100000+1;
int arr[MAX];
int mem[MAX];


//approach 1
void solve1()
{
    int n; scanf("%d", &n);
        fill (mem, mem + n+1, 0);

        for (int i= 0; i < n; i++)
            cin >> arr[i];


        bool isEqual = false;
        for (int i= 0; i < n;i++)
        {
            int key = i;
            while (arr[i] == arr[key] && i < n)
                i++;
            if (i != n && key != 0)
                mem[arr[key]]++;
            if (i == n && key == 0)
                isEqual = true;
            i--;
        }

        if (isEqual)
        {
            cout << 0 << endl;
            return;
        }

        int mn = INT_MAX;
        for (int i= 0; i < n; i++)
        {
           // cout<< mem[arr[i]] << " ";

            if (mem[arr[i]] < mn)
                mn = mem[arr[i]];
        }

        cout << mn+1 << endl;
}

//approach 2
void solve2()
{
    int n; scanf("%d", &n);
    int m = 0;
    for (int i= 0; i < n; i++)
    {
        int tmp; scanf("%d", &tmp);
        if (m == 0 || tmp != arr[m-1])
        {
            arr[m] = tmp;
            m++;
        }

    }
    fill(mem, mem+n+1, 0);

    for (int i = 0; i < m; i++)
            mem[arr[i]]++;

     mem[arr[0]] -= 1;
     mem[arr[m-1]] -=1;
    int mn = INT_MAX;
    for (int i= 0; i < m;i++)
    {
        if (mem[arr[i]] < mn )
            mn = mem[arr[i]];
    }

    if (m == 1)
        cout << 0 << endl;
    else
        cout << mn + 1 << endl;


}
int main()
{
    int t; scanf("%d", &t);
    while(t--)
    {
        solve2();
    }
}
