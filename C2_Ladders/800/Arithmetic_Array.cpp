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
        int s1 = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> v[i];
            s1 += v[i];
        }

        if (s1 > N)
        {
            cout << s1 - N << "\n";
        }
        else if (s1 == N)
        {
            cout << 0 << "\n";
        }
        else
        {
            cout << 1 << "\n";
        }
    }
}