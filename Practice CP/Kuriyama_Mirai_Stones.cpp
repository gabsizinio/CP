#include <iostream>
#include <vector>
#include <algorithm>

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

    vector<int> p1(N + 1);
    p1[0] = 0;

    for (int i = 0; i < N; i++)
    {
        p1[i + 1] = p1[i] + v[i];
    }

    sort(v.begin(), v.end());
    vector<int> p2(N + 1);
    p2[0] = 0;

    for (int i = 0; i < N; i++)
    {
        p2[i + 1] = p2[i] + v[i];
    }

    int M;
    cin >> M;

    while (M--)
    {
        int type, l, r;
        cin >> type >> l >> r;

        if (type == 1)
        {
            cout << p1[r] - p1[l - 1] << "\n";
        }
        else
        {
            cout << p2[r] - p2[l - 1] << "\n";
        }
    }
}