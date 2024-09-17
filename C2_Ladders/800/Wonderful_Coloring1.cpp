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
        string s;
        cin >> s;

        map<char, int> m;
        int ans = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (m.count(s[i]) == 0)
            {
                ans++;
                m[s[i]] = 1;
            }
            else if (m[s[i]] == 1)
            {
                m[s[i]]++;
                ans++;
            }
        }

        cout << ans / 2 << "\n";
    }
}