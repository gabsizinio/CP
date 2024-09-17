#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string st;
        cin >> st;

        int A = 0, B = 0, C = 0;

        for (int i = 0; i < st.size(); i++)
        {
            if (st[i] == 'A')
            {
                A++;
            }
            else if (st[i] == 'B')
            {
                B++;
            }
            else
            {
                C++;
            }
        }

        if (A + C == B)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}