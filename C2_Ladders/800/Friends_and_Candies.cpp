#include <iostream>
#include <vector>

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
        int sum = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> v[i];
            sum += v[i];
        }

        if (sum % N != 0)
        {
            cout << -1 << "\n";
        }
        else
        {
            int val = sum / N, ans = 0;

            for (int i = 0; i < N; i++)
            {
                if (v[i] > val)
                {
                    ans++;
                }
            }

            cout << ans << "\n";
        }
    }
}