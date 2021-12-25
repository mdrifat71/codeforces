#include <iostream>
using namespace std;

int ask(int l, int r)
{
    if (l == r)
        return -1;
    cout << "? " << l << " " << r << endl;
    int x; cin >> x;
    return x;
}
int main()
{
    int n; cin >> n;
    int pos  = ask(1,n);

    //greater is left to 2nd
    if (ask(1, pos) == pos)
    {
        int init = 1, fin = pos;
        while (init < fin)
        {
            int mid = (init + fin + 1) / 2 ;
            if (ask(mid, n) == pos)
                init = mid;
            else
                fin = mid - 1;
        }
        cout << "! " << init << endl;

    }
    else
    {
        //greater is right to second
        int init = pos, fin = n;

        while (init < fin)
        {
            int mid = (init + fin) / 2;
            if (ask (1, mid) == pos)
                fin = mid;
            else
                init = mid + 1;
        }
        cout << "! " << init << endl;
    }
}
