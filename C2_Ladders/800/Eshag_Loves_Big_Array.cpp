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
        int N;
        cin >> N;

        vector<int> v(N);
        for (int i = 0; i < N; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        int men = v[0], cnt = 0;
        for (int i = 0; i < N; i++)
        {
            if (v[i] == men)
            {
                cnt++;
            }
        }

        cout << N - cnt << "\n";
    }
}