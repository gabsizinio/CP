#include <iostream>

using namespace std;

int main(){
    int N, aux;

    cin >> N;

    int minas[N] = {};

    for(int i = 0; i < N; i++){
        cin >> aux;
        minas[i] = aux;
    }

    int res[N] = {};

    for(int i = 0; i < N; i++){
        int som = 0;
        if(i == 0){
            if(minas[i] == 1){
                som++;
            }
            if(minas[i+1] == 1){
                som++;
            }
            res[i] = som;
        }else if(i == N-1){
            if(minas[i] == 1){
                som++;
            }
            if(minas[i-1] == 1){
                som++;
            }
            res[i] = som;
        }else{
            if(minas[i] == 1){
                som++;
            }
            if(minas[i+1] == 1){
                som++;
            }
            if(minas[i-1] == 1){
                som++;
            }
            res[i] = som;
        }
    }
    for(int i = 0; i < N; i++){
        cout << res[i] << endl;
    }
}