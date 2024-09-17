#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        string s;
        cin >> s;

        string p = s;

        sort(p.begin(), p.end());

        int ans = 0;
        for (int i = 0; i < N; i++)
        {
            if (s[i] != p[i])
            {
                ans++;
            }
        }

        cout << ans << "\n";
    }
}