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
        for (int i = 0; i < N; i++)
        {
            cin >> v[i];
        }

        int val = v[0], i1 = 0;

        for (int i = 0; i < N; i++)
        {
            if (v[i] > val)
            {
                val = v[i];
                i1 = i;
            }
        }

        val = v[0];
        int i2 = 0;

        for (int i = 0; i < N; i++)
        {
            if (v[i] < val)
            {
                val = v[i];
                i2 = i;
            }
        }

        i1++;
        i2++;

        int p1, p2, p3;

        if (i2 > i1)
        {
            p1 = i2;
            p2 = N - i1 + 1;
            p3 = i1 + N - i2 + 1;
        }
        else
        {
            p1 = i1;
            p2 = N - i2 + 1;
            p3 = i2 + N - i1 + 1;
        }

        cout << min(p1, min(p2, p3)) << "\n";
    }
}