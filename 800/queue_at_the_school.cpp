#include <bits/stdc++.h>

using namespace std;


int main()
{

    string str;
    int n,t;
    cin >> n >>t;
    cin >> str;


    while (t != 0)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (str[i] == 'B')
            {
                if (str[i+1] == 'G')
                {

                    char tmp = str[i];
                    str[i] = str[i+1];
                    str[i+1] = tmp;
                    i++;
                }
            }
        }
        t--;
    }
    cout << str <<endl;
}
