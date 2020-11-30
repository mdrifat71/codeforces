#include <iostream>
#include <string>

using namespace std;
string num_to_str(int num)
{
    string s;
    int size = 0;
    char c;


    while (num != 0)
    {
        c = num % 10 + 48;
        s.push_back(c);
        num = num / 10;
        size++;
    }

    //reverse the string
    string ms;
    for (int i = size - 1; i >= 0; i--)
    {
      ms.push_back(s[i]);
    }
    return ms;
}
void way_to_long(string str)
{
    int size = str.length();
    string ms = str;
    if (size > 10)
    {
        ms = "";
        ms.push_back(str[0]);
        ms += num_to_str(size - 2);
        ms.push_back(str[size-1]);
    }

    cout << ms <<endl;
}
int main()
{
    int n;
    cin >> n;
    string str;
    for(int i = 0; i < n; i++)
    {
        cin >> str;
        way_to_long(str);

    }


}
