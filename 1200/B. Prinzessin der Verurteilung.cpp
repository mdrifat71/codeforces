#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;

        int arr[123][123];
        for(int i = 97; i <= 122)
            for (int j = 97; j<= 122; j++)
                arr[i][j] = 0;
        int u_con[123];
        fill(u_con, u_con+123, 0);

        for (int i = 1; i < n; i++)
        {
            char a = s[i-1];
            char b = s[i];
            arr[a][b] = 1;

            if (arr[a][b] != 1)
                u_con[a]++;
        }

        string sub = "";
        for (int i = a; i <=z; i++)
        {
            if (u_con[i] == 0)
            {
                sub = i;
                break;
            }

            char c = 'a';
            for (int j = z; j >= z; j--)
            {


            }
        }



    }
}
