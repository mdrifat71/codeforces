#include <iostream>
#include <vector>
using namespace std;


void knapsack()
{
    int n;
    unsigned long long int W;
    cin >> n;
    cin >> W;
    vector <int> w;
    int tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        w.push_back(tmp);
    }



    int ct = 0;
    unsigned long long int tmp_w = W;
    for(int i = 0; i < n; i++)
    {
        if ( W/2 >= tmp_w)
            break;
        if (tmp_w >= w[i])
        {
            tmp_w -= w[i];
            w[ct] = i+1;
            ct++;

        }
    }

    if (ct > 0 && W/2 >= tmp_w)
    {
       cout << ct <<endl;

       for(int i = 0; i < ct; i++)
            cout << w[i] << " ";
        cout << endl;
    }
    else
    {
        cout << -1 <<endl;
    }
}

int main()
{
    int t;
    cin >> t;


    for (int i = 0; i < t; i++)
    {
        knapsack();
    }
}
