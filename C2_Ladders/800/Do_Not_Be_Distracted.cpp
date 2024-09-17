#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;

        string word;
        cin >> word;

        bool ans = true;

        map<char, int> m;

        for (int i = 0; i < N; i++)
        {
            if (m.count(word[i]) == 0)
            {
                m[word[i]] = i;
            }
            else
            {
                if (m[word[i]] == i - 1)
                {
                    m[word[i]] = i;
                }
                else
                {
                    ans = false;
                    break;
                }
            }
        }
        if (ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}