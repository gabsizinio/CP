#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int A, B, C;
        cin >> A >> B >> C;

        int N = 2 * abs(A - B);
        if (A <= N && B <= N && C <= N)
        {
            int d = N / 2 + C;
            while (d > N)
                d -= N;
            cout << d << '\n';
        }
        else
        {
            cout << -1;
        }
        cout << "\n";
    }
}