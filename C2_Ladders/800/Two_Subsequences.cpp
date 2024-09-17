#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string pal;
        cin >> pal;

        string cop = pal;

        sort(pal.begin(), pal.end());

        cout << pal[0] << " ";

        bool ind = false;

        for (int i = 0; i < pal.size(); i++)
        {
            if (ind == false && cop[i] == pal[0])
            {
                ind = true;
            }
            else
            {
                cout << cop[i];
            }
        }

        cout << "\n";
    }
}