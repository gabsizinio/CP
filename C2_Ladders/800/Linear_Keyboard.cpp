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
        string alf, pal;

        cin >> alf;
        cin >> pal;

        map<char, int> m;

        for (int i = 0; i < alf.size(); i++)
        {
            m[alf[i]] = i;
        }

        int ans = 0;

        for (int i = 0; i < pal.size() - 1; i++)
        {
            ans += abs(m[pal[i]] - m[pal[i + 1]]);
        }

        cout << ans << "\n";
    }
}