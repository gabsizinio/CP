#include <iostream>
#include <vector>

using namespace std;

#define int long long

signed main()
{
    int T;
    cin >> T;

    vector<int> v;

    int val = 2050;

    for (int i = 0; i < 18; i++)
    {
        v.push_back(val);
        val *= 10;
    }

    while (T--)
    {
        int num;
        cin >> num;

        int ans = 0;

        while (num >= 2050)
        {
            for (int i = 0; i < v.size(); i++)
            {
                if (i == v.size() - 1)
                {
                    if (v[i] < num)
                    {
                        num -= v[i];
                        ans++;
                        break;
                    }
                }
                if (v[i] > num)
                {
                    num -= v[i - 1];
                    ans++;
                    break;
                }
            }
        }
        if (num == 0)
        {
            cout << ans << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
}