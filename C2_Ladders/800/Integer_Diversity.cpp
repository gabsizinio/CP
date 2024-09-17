#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> v(N);
        for (int i = 0; i < N; i++)
            cin >> v[i];

        map<int, int> m;

        for (int i = 0; i < N; i++)
        {
            if (m.count(v[i]) == 0)
            {
                m[v[i]] = 1;
            }
            else
            {
                v[i] = v[i] * -1;
                m[v[i]] = 1;
            }
        }

        m.clear();

        int ans = 0;
        for (int i = 0; i < N; i++)
        {
            // cout << v[i] << " ";
            if (m.count(v[i]) == 0)
            {
                ans++;
                m[v[i]] = 1;
            }
        }

        cout << ans << "\n";
    }
}