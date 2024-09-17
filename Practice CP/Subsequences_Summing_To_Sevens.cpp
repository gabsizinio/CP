#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> v(N);

    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    map<int, int> m;

    vector<int> prefix(N + 1);
    prefix[0] = 0;
    prefix[1] = v[0];

    for (int i = 2; i <= N; i++)
    {
        prefix[i] = prefix[i - 1] + v[i - 1];
    }

    int ans = 0;

    for (int i = 0; i <= N; i++)
    {
        if (m.count(7 - (prefix[i] % 7)) != 0)
        {
            ans = max(ans, i - m[7 - (prefix[i] % 7)]);
        }
        if (m.count(prefix[i] % 7) == 0)
        {
            m[prefix[i] % 7] = i;
        }
    }
    cout << ans << "\n";
}