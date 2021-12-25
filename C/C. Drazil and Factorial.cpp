#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int mem[] = {0,0,2,3,322,5,53,7,7222,7332};

    int n; cin >> n;
    ll  a; cin >> a;
    string s="";
    int i = 10;
    while(a != 0)
    {
        int r = a % i;
        if (r > 1)
        {
            s += to_string(mem[r]);
        }
        a = a /10;
    }
    sort(s.begin(), s.end(), greater<>());
    cout << s << endl;




}
