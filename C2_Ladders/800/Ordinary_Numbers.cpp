#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int cc = 0; cc < t; cc++)
    {
        int N;
        cin >> N;

        vector<int> v = {1, 11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111};

        int ans = 0;

        for (int i = 0; i < v.size(); i++)
        {
            for (int k = 1; k <= 9; k++)
            {
                if (v[i] * k > N)
                {
                    break;
                }
                else
                {
                    ans++;
                }
            }
        }

        cout << ans << "\n";
    }
}