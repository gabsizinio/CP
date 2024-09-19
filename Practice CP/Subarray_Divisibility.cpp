#include <iostream>
#include <vector>
#include <map>

using namespace std;

#define int long long

signed main()
{
    int N;
    cin >> N;
    vector<int> v(N);

    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    vector<int> prefix(N);
    prefix[0] = v[0];

    for (int i = 1; i < N; i++)
    {
        prefix[i] = prefix[i - 1] + v[i];
    }

    int ans = 0;
    map<int, int> m;

    int res;

    for (int i = 0; i < N; i++)
    {
        if (prefix[i] % N == 0)
        {
            ans++;
        }
        if (prefix[i] < 0)
        {
            res = ((prefix[i] % N) + N) % N;
        }
        else
        {
            res = prefix[i] % N;
        }
        ans += m[res];
        m[res]++;
    }

    cout << ans;
}
