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

        int sum = 0, tur = 0;

        for (int val = 1; sum < N; tur++, val += 2)
        {
            sum += val;
        }

        cout << tur << "\n";
    }
}