#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string pal;
        cin >> pal;

        int c1 = 0, c2 = 0;

        for (int i = 0; i < pal.size(); i++)
        {
            if (pal[i] == '0')
            {
                c1++;
            }
            else
            {
                c2++;
            }
        }

        if (c1 == 0 || c2 == 0)
        {
            cout << 0 << "\n";
        }
        else if (c1 == c2)
        {
            cout << c1 - 1 << "\n";
        }
        else
        {
            cout << min(c1, c2) << "\n";
        }
    }
}