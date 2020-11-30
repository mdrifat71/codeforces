#include <iostream>

using namespace std;

int main()
{
    int n, c; cin >> n >> c;
    int score[n], time[n];
    for (int i = 0; i < n; i++) cin >> score[i];
    for (int i = 0; i < n; i++) cin >> time[i];

    int l = 0, r = 0, lt = 0, rt = 0;

    for (int i = 0, j = n - 1; i < n; i++, j--)
    {
        lt += time[i];
        rt += time[j];

        l += max (0, score[i] - c * lt);
        r += max (0, score[j] - c * rt);
    }

    if ( l > r)
        cout << "Limak" <<endl;
    else if (r > l)
        cout << "Radewoosh" <<endl;
    else
        cout << "Tie" <<endl;
}
