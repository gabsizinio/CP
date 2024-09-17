#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string a;
        cin >> a;

        map<char, int> m;
        for (int i = 0; i < a.size(); i++)
        {
            m[a[i]]++;
        }

        string alf = "abcdefghijklmnopqrstuvwxyz";

        bool ans = true;

        for (int i = 0; i < a.size(); i++)
        {
            if (m.count(alf[i]) == 0 || m[alf[i]] > 1)
            {
                ans = false;
                break;
            }
        }

        if (ans)
        {
            string s1 = "", s2 = "";

            bool ind = true;

            for (int i = 0; i < a.size(); i++)
            {
                if (a[i] == 'a')
                {
                    ind = false;
                    continue;
                }
                if (ind)
                {
                    s1 += a[i];
                }
                else
                {
                    s2 += a[i];
                }
            }
            string s3 = s1, s4 = s2;

            sort(s3.rbegin(), s3.rend());
            sort(s4.begin(), s4.end());

            bool in = true;

            for (int i = 0; i < s3.size(); i++)
            {
                if (s3[i] != s1[i])
                {
                    in = false;
                }
            }
            for (int i = 0; i < s4.size(); i++)
            {
                if (s4[i] != s2[i])
                {
                    in = false;
                }
            }

            if (in)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            cout << "NO\n";
        }
    }
}