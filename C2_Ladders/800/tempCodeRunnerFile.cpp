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
        int A, B, C;
        cin >> A >> B >> C;

        vector<int> v = {A, B, C};

        sort(v.begin(), v.end());

        int ma = v[2];

        if (ma == 0)
        {
            cout << 1 << " " << 1 << " " << 1 << "\n";
            continue;
        }

        if (A == B)
        {
            if (A == ma)
            {
                cout << 1 << " " << 1 << ma - C + 1 << "\n";
            }
            else
            {
                cout << ma - A + 1 << " " << ma - B + 1 << " " << 0 << "\n";
            }
            continue;
        }

        if (B == C)
        {
            if (B == ma)
            {
                cout << ma - A + 1 << " " << 1 << " " << 1 << "\n";
            }
            else
            {
                cout << 0 << " " << ma - B + 1 << " " << ma - C + 1 << "\n";
            }
            continue;
        }

        if (A == C)
        {
            if (A == ma)
            {
                cout << 1 << " " << ma - B + 1 << " " << 1 << "\n";
            }
            else
            {
                cout << ma - A + 1 << " " << 1 << " " << ma - C + 1 << "\n";
            }
            continue;
        }

        if (ma == 0)
        {
            cout << 1 << " " << 1 << " " << 1 << "\n";
        }
        else
        {
            if (ma == A)
            {
                cout << 0 << " ";
            }
            else
            {
                cout << ma - A + 1 << " ";
            }

            if (ma == B)
            {
                cout << 0 << " ";
            }
            else
            {
                cout << ma - B + 1 << " ";
            }

            if (ma == C)
            {
                cout << 0 << "\n";
            }
            else
            {
                cout << ma - C + 1 << "\n";
            }
        }
    }
}