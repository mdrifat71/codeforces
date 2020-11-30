#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,k; cin >> n >> k;
    long long int th = n / 2;


    long long int d = n / (2 + 2 * k);
    long long int ce = d * k; // certificate

   long long int max_ = n - (d + ce);
    cout << d << " " << ce << " " <<  max_ <<endl;
}
