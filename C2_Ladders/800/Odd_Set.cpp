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

        vector<int> v(2 * N);
        for (int i = 0; i < 2 * N; i++)
        {
            cin >> v[i];
        }

        int q1 = 0;
        for (int i = 0; i < 2 * N; i++)
        {
            if (v[i] % 2 == 1)
            {
                q1++;
            }
        }

        if (N != q1)
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
    }
}