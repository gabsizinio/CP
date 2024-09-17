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

        string s1, s2;
        cin >> s1 >> s2;
        int ans = 0;

        for (int i = 0; i < N; i++)
        {
            if (s2[i] == '0')
            {
                continue;
            }
            if (i == 0)
            {
                if (s1[i] == '0')
                {
                    ans++;
                }
                else if (s1[i + 1] == '1')
                {
                    ans++;
                    s1[i + 1] = '-';
                }
            }
            else if (i == N - 1)
            {
                if (s1[i - 1] == '1')
                {
                    ans++;
                    s1[i - 1] = '-';
                }
                else if (s1[i] == '0')
                {
                    ans++;
                }
            }
            else
            {
                if (s1[i - 1] == '1')
                {
                    s1[i - 1] = '-';
                    ans++;
                }
                else if (s1[i] == '0')
                {
                    ans++;
                }
                else if (s1[i + 1] == '1')
                {
                    s1[i + 1] = '-';
                    ans++;
                }
            }
        }
        cout << ans << "\n";
    }
}