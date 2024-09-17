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

        if (N % 2 == 0)
        {
            for (int i = 1; i < N; i += 2)
            {
                cout << i + 1 << " " << i << " ";
            }
            cout << "\n";
        }
        else
        {
            for (int i = 1; i < N - 2; i += 2)
            {
                cout << i + 1 << " " << i << " ";
            }
            cout << N - 1 << " " << N << " " << N - 2 << "\n";
        }
    }
}