#include <iostream>

using namespace std;

int main(){
    int N, aux;
    cin >> N;

    int seq[N] = {};

    for(int i = 0; i < N; i++){
        cin >> aux;
        seq[i] = aux;
    }

    int som = 0;

    for(int i = 0; i < N-2; i++){
        if(seq[i] == 1){
            if(seq[i+1] == 0 && seq[i+2] == 0){
                som++;
            }
        }
    }

    cout << som;
}