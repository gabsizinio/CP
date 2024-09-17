#include <bits/stdc++.h>
using namespace std;
int a[105];
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d%d", &n, &k);
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] < k)
            {
                k -= a[i];
                a[n - 1] += a[i];
                a[i] =
                    0;
            }
            else
            {
                a[i] -= k;
                a[n - 1] += k;
                k = 0;
            }
        }
        for (int i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
}
