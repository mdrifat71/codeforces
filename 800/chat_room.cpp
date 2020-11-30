#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    char arr[5] = {'h', 'e', 'l', 'l', 'o'};
    int pos = 0;
    for (char c:s)
    {

        if(c == arr[pos])
            pos++;
    }

    if (pos > 4)
        cout << "YES" <<endl;
    else
        cout << "NO" <<endl;


}
