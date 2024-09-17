#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int cc = 0; cc < T; cc++)
    {
        int N;
        cin >> N;

        vector<int> v(N);
        for (int i = 0; i < N; i++)
        {
            cin >> v[i];
        }

        map<int, vector<int>> m;

        for (int i = 0; i < N; i++)
        {
            if (m.count(v[i]) == 0)
            {
                m[v[i]] = {i + 1};
            }
            else
            {
                m[v[i]].push_back(i + 1);
            }
        }

        for (int i = 0; i < N; i++)
        {
            if (m[v[i]].size() == 1)
            {
                cout << m[v[i]][0] << "\n";
            }
        }
    }
}