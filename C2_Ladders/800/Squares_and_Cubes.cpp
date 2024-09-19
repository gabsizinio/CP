#include <vector>
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

#define int long long

signed main()
{
    set<int> nums;

    int num = 1;

    while ((num * num <= 1e9) || (num * num * num <= 1e9))
    {
        if (num * num <= 1e9)
        {
            nums.insert(num * num);
        }
        if (num * num * num <= 1e9)
        {
            nums.insert(num * num * num);
        }
        num++;
    }

    // sort(nums.begin(), nums.end());

    // cout << nums.size() << "\n";

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << nums[i] << " ";
    // }

    // cout << "\n";

    int T;
    cin >> T;

    while (T--)
    {
        int val;
        cin >> val;

        int ans = 0;

        for (auto vall : nums)
        {
            if (vall > val)
            {
                break;
            }

            ans++;
        }

        //        cout << "\n";

        cout << ans << "\n";
    }
}