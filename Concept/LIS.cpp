
#include <bits/stdc++.h>

using namespace std;

int helper(vector <int> nums, int i, int prev)
{
    if (i == nums.size())
        return 0;
    if (nums[i] > prev)
    {
        int x = helper(nums, i+1, nums[i]) + 1;
        int y = helper(nums, i+1, prev);
        cout << x << " " << y << endl;
        return max(x, y);
    }

    return helper(nums, i+1, prev);
}
int main()
{
    int n; cin>> n;
    vector <int> nums;
    for (int i = 0; i < n; i++)
    {
        int tmp; cin >> tmp;
        nums.push_back(tmp);
    }
    cout << helper(nums, 0, INT_MIN);
 //3 5 6 2 5 4 19 5 6 7 12

}
