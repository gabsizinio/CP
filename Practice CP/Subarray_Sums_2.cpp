#include <iostream>
#include <vector>
#include <map>

using namespace std;

#define int long long

signed main()
{
    int N, X;
    cin >> N >> X;

    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    vector<int> prefix(N);

    prefix[0] = v[0];

    for (int i = 1; i < N; i++)
    {
        prefix[i] = prefix[i - 1] + v[i];
    }

    map<int, int> m;
    m[0] = 1;

    int ans = 0;

    for (int i = 0; i < N; i++)
    {
        ans += m[prefix[i] - X];
        m[prefix[i]]++;
    }

    cout << ans;
}

/*
A ideia aqui é usar PREFIX SUM e um MAP para saber se há um intervalo com soma X, no map armazenamos os valores já lidos do prefix array, se
chegarmos a prefix[i] e já tivermos lido prefix[i]-X, então há como fazer um subarray com soma igual a X.

No entanto, pode ocorrer de haver mais de uma ocorrência de prefix[i]-X, logo o map armazena as ocorrência de cada valor, pois, se chegarmos
a prefix[i], podemos formar m[prefix[i]-X] subarrays com soma X.

*/