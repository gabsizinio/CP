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

        string pal;
        cin >> pal;

        if (pal == "1" || pal == "0" || pal == "10" || pal == "01")
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}