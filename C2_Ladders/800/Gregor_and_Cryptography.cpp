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

        if (N == 5)
        {
            cout << 2 << " " << 4 << "\n";
            continue;
        }

        N--;
        cout << 2 << " " << N / 2 << "\n";
    }
}