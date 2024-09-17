#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;

    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    vector<int> v1(N + 1);
    v1[0] = 0;

    vector<int> v2(N + 1);
    v2[0] = 0;

    vector<int> v3(N + 1);
    v3[0] = 0;

    //  cout << 0 << " ";

    for (int i = 1; i <= N; i++)
    {
        if (v[i - 1] == 1)
        {
            v1[i] = v1[i - 1] + 1;
        }
        else
        {
            v1[i] = v1[i - 1];
        }
        //  cout << v1[i] << " ";
    }
    // cout << "\n"
    //  << 0 << " ";
    for (int i = 1; i <= N; i++)
    {
        if (v[i - 1] == 2)
        {
            v2[i] = v2[i - 1] + 1;
        }
        else
        {
            v2[i] = v2[i - 1];
        }
        //  cout << v2[i] << " ";
    }
    // cout << "\n"
    //       << 0 << " ";
    for (int i = 1; i <= N; i++)
    {
        if (v[i - 1] == 3)
        {
            v3[i] = v3[i - 1] + 1;
        }
        else
        {
            v3[i] = v3[i - 1];
        }
        //        cout << v3[i] << " ";
    }

    int p1, p2;
    for (int i = 0; i < Q; i++)
    {
        cin >> p1 >> p2;

        cout << v1[p2] - v1[p1 - 1] << " " << v2[p2] - v2[p1 - 1] << " " << v3[p2] - v3[p1 - 1] << "\n";
    }
}