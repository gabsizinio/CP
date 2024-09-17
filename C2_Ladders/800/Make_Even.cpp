#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string pal;
        cin >> pal;

        int val = stoi(pal);

        if (val % 2 == 0)
        {
            cout << 0 << "\n";
            continue;
        }

        string aux = "";

        bool ans = false;

        for (int i = 0; i < pal.size(); i++)
        {
            aux += pal[i];

            int num = stoi(aux);

            if (num % 2 == 0)
            {
                ans = true;
                break;
            }

            aux = "";
        }

        if (ans == false)
        {
            cout << -1 << "\n";
            continue;
        }

        aux = "";
        aux += pal[0];

        int num = stoi(aux);

        if (num % 2 == 0)
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << 2 << "\n";
        }
    }
}