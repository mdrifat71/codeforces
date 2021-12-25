#include <bits/stdc++.h>

using namespace std;


int main()
{

    int n, m, k, t; cin >> n >> m >> k >> t;

    vector < pair <int , int> > arr;
    for (int i = 0; i < k; i++)
    {
        int tmp1, tmp2; cin >> tmp1 >> tmp2;
        arr.push_back(make_pair(tmp1,tmp2));
    }

    string s[] = { "Grapes", "Carrots", "Kiwis"};



    while (t--)
    {
        bool valid = true;
        int count = 0;
        int r, c; cin >> r >> c;

        for(int i = 0; i < k; i++)
        {

            if (arr[i].first == r && arr[i].second == c)
            {
                valid = false;
                break;
            }
            else if (arr[i].first < r)
            {
                count++;
            }
            else if (arr[i].first == r && arr[i].second < c)
            {
                count++;
            }
        }

        if (valid == true)
        {
            int cell = ((r-1) * m) + c;
            cell = cell - count;
            int pos = (cell % 3);

            cout << s[pos] << endl;
        }
        else
        {
            cout << "Waste" <<endl;
        }
    }

}
