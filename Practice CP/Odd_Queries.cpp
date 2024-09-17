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

        int N, Q;
        cin >> N >> Q;

        vector<int> v(N);
        for (int i = 0; i < N; i++)
            cin >> v[i];

        vector<int> prefix(N + 1);
        prefix[0] = 0;

        prefix[1] = v[0];

        for (int i = 2; i <= N; i++)
        {
            prefix[i] = prefix[i - 1] + v[i - 1];
        }

        int sum = prefix[N];

        int v1, v2, v3;

        for (int i = 0; i < Q; i++)
        {
            cin >> v1 >> v2 >> v3;

            int prov = sum;
            //  cout << prov << "\n";

            prov -= (prefix[v2] - prefix[v1 - 1]);
            // cout << prov << "\n";
            prov += v3 * (v2 - v1 + 1);
            // out << prov << "\n";

            if (prov % 2 == 1)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
}

// 3 5 9 15 16 17 22 25