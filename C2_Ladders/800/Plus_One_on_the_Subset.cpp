#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int cc = 0; cc < T; cc++)
    {
        int N;
        cin >> N;

        vector<int> v(N);
        for (int i = 0; i < N; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        int maior = v[v.size() - 1];
        int menor = v[0];

        cout << maior - menor << "\n";
    }
}