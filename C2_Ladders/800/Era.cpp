#include <iostream>
#include <vector>

using namespace std;

#define int long long

signed main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> v(N);
        for (int i = 0; i < N; i++)
        {
            cin >> v[i];
        }
        int ans = 0, ind = 1;

        for (int i = 0; i < N; i++)
        {
            if (v[i] > ind)
            {
                ans += v[i] - ind;
                ind = v[i] + 1;
            }
            else
            {
                ind++;
            }
        }

        cout << ans << "\n";
    }
}