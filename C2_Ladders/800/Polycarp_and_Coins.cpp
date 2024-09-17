#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int cc = 0; cc < T; cc++)
    {
        int N;
        cin >> N;

        if (N % 3 == 0)
        {
            cout << N / 3 << " " << N / 3 << "\n";
        }
        else if (N % 3 == 1)
        {
            cout << ((N - 1) / 3) + 1 << " " << (N - 1) / 3 << "\n";
        }
        else
        {
            cout << (N - 1) / 3 << " " << ((N - 1) / 3) + 1 << "\n";
        }
    }
}