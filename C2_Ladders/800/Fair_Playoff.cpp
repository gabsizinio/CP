#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int a, b, c, d;

        cin >> a >> b >> c >> d;

        if (max(a, b) < min(c, d) or max(c, d) < min(a, b))
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
}