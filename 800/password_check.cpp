#include <iostream>

using namespace std;

int main()
{
    string s; cin >> s;
    int l = 0;
    bool ca = false, sm = false, dg = false;

    for (char c : s)
    {
        if (c >= 65 && c <= 90)
            ca = true;
        else if (c >= 97 && c <= 122)
            sm = true;
        else if (c >= 48 && c <= 57)
            dg = true;

        l++;
    }

    if (ca && sm && dg && l >= 5)
        cout << "Correct" <<endl;
    else
        cout << "Too weak" <<endl;
}
