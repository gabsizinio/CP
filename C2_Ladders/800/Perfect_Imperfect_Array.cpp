#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    int T;
    cin >> T;

    set<int> s;
    int num = 1;

    while (num * num <= 10000)
    {
        s.insert(num * num);
        num++;
    }

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> v(N);
        for (int i = 0; i < N; i++)
        {
            cin >> v[i];
        }

        bool ans = true;

        for (int i = 0; i < N; i++)
        {
            if (s.find(v[i]) == s.end())
            {
                ans = false;
            }
        }

        if (ans == true)
        {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
    }
}