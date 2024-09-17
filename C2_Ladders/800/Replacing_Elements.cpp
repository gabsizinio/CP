#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, D;
        cin >> N >> D;

        bool ind = true;

        vector<int> v(N);
        for (int i = 0; i < N; i++)
        {
            cin >> v[i];
            if (v[i] > D)
            {
                ind = false;
            }
        }

        if (ind)
        {
            cout << "YES\n";
            continue;
        }

        sort(v.begin(), v.end());

        if (v[0] + v[1] <= D)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}