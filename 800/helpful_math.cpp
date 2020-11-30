#include <bits/stdc++.h>

using namespace std;

int main()
{
    string m;
    cin >> m;

    string ns;
    int size = 0;

    for (char c:m)
    {
        if(c != '+')
        {
            ns.push_back(c);
            size++;
        }

    }
    sort(ns.begin(), ns.end());

    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
            cout << ns[i] << endl;
        else
            cout << ns[i] << "+";
    }
}
