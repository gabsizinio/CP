#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string st;
        cin >> st;

        sort(st.begin(), st.end());
        cout << st << "\n";
    }
}