#include <iostream>
#include <vector>

using namespace std;

#define int long long

signed main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> v(N);
        for (int i = 0; i < N; i++)
            cin >> v[i];

        int sum = 0;
        for (int i = 0; i < N; i++)
            sum += v[i];

        if (sum % N == 0)
        {
            cout << 0 << "\n";
        }
        else
        {
            cout << 1 << "\n";
        }
    }
}