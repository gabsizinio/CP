#include <iostream>


using namespace std;

int boot[32][2];
int n;

int main(){
    int M;
    cin >> n;
    char N;

    for(int i = 0; i < n; i++){
        cin >> M >> N;

        boot[M-30][(N=='D' ? 0:1)]++;

    }

    int res = 0;

    for(int i = 0; i < 31; i++){
        res += min(boot[i][0], boot[i][1]);
    }

    cout << res;

}