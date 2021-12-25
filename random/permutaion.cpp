#include <bits/stdc++.h>

using namespace std;
int total = 0;

void permutation(string s, int i, int j, int n, int elem, map<char, int> mem, string p)
{

    if (p.size() == elem)
    {
        total++;
        cout << total << " "<< p << endl;
    }
    if (i == elem)
    {
        return;
    }
    if (j == n)
        return permutation(s, i+1, 0, n,elem, mem, p);


    if (!mem.count(s[j]))
    {
        p.push_back(s[j]);
        mem.insert(make_pair(s[j], 1));
       // cout << i << " " << j << " " << p << " ";
        permutation(s, i+1, 0, n, elem, mem, p);
        p.pop_back();
        mem.erase(s[j]);

    }
    permutation(s, i, j+1, n, elem, mem, p);

}
int main()
{
    map <char, int> mem;
    string p = "";
    string s;
    int elem;;
    cin >> s;
    cin >> elem;
    int n = s.size();

    permutation(s, 0, 0, n,elem,mem, p );
}
