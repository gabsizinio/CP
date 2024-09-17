#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int T;
    cin >> T;

    vector<int> v;

    int num = 1;

    while (v.size() < 1000)
    {
        if (num % 3 == 0 or num % 10 == 3)
        {
            num++;
            continue;
        }
        v.push_back(num);
        num++;
    }

    for (int cc = 0; cc < T; cc++)
    {
        int N;
        cin >> N;

        cout << v[N - 1] << "\n";
    }
}